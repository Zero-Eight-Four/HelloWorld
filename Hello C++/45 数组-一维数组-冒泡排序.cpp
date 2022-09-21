//最常用的排序算法，对数组内元素进行排序
//1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
//2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
//3. 重复以上的步骤，每次比较次数 - 1，直到不需要比较
#include<iostream>
using namespace std;
int main() 
{
	int arr[10]={};
	cout << "请输入十个以内的数字" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "请输入第" << i + 1 << "个数字：";
		cin >> arr[i];
	}
	cout << "您输入的数字为；";
	for (int i = 0; i < 10; i++)
	{
		cout <<arr[i]<<" "; 
	}
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//将大数交换到下一位
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "排序后的数字为：";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] <<" ";
	}
	system("pause");
	return 0;
}