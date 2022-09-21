//一维数组定义的三种方式： 
#include<iostream>
using namespace std;
int main()
{
	//元素下标从0开始索引
	//1.  数据类型  数组名[数组长度];
	int arr1[5]={0,0,0,0,0};
	cout << "请输入第一个值" << endl;
	cin >> arr1[0];
	cout << "请输入第二个值" << endl;
	cin >> arr1[1];
	cout << "请输入第三个值" << endl;
	cin >> arr1[2];
	cout << "请输入第四个值" << endl;
	cin >> arr1[3];
	cout << "请输入第五个值" << endl;
	cin >> arr1[4];
	cout << "第三个值为 " << arr1[2] << endl;//获取输入的5个整型中的第三个
	//2. 数据类型  数组名[数组长度] = { 值1，值2 ... };
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}
	//3. 数据类型  数组名[] = { 值1，值2 ... }; 
	int arr3[] = {10,20,30,40,50,60,70,80,90,100};
	for (int i = 0; i < 12; i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}