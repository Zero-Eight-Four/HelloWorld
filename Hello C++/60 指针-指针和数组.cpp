#include<iostream>
using namespace std;
//利用指针访问数组中的元素
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	cout << "第一个元素为" << arr[0] << endl;
	int* p = arr;//指向数组的指针
	//arr就是数组首地址
	//利用指针遍历数组
	for (int i = 0; i < 10; i++)
	{
		cout << "数组中的第" << i + 1 << "个元素为：" << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}