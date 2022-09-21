#include<iostream>
using namespace std;
int main()
{
	cout << "请输入5个数字" << endl;
	int arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		cout << "请输入下一个数字" << endl;
	}
	cout << "逆置前：" ;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<" ";
	}
	//先记录起始下标位置
	//再记录结束下标位置
	//起始下标与结束下标元素互换
	//起始位置++，结束位置--
	// 循环执行，直到起始位置》=结束位置
	int start = 0;
	int end = (sizeof(arr) / sizeof(arr[0]) - 1);
	for (start; start <= end; start++, end--)
	{
		//定义一个temp暂时存放arr[start]，后面赋值给arr[end]
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	cout << "\n逆置后：";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}