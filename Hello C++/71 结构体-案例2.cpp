//案例描述：
//设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。
//通过冒泡排序的算法，将数组中的英雄按照年龄进行升序 ，最终打印排序后的结果。
#include<iostream>
#include<string>
using namespace std;
struct status
{
	string name;
	int age = 0;
	string camp;
};
void bubbleSort (status arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len -1 - i; j++)
		{
			if (arr[j].age>arr[j+1].age)
			{
				//将大数交换到下一位
				status temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}
void print(status arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].name << "\t" << arr[i].age << "\t" << arr[i].camp << endl;
	}
}
int main()
{
	//定义英雄数组
	status hero[5];
	//输入英雄数据
	for (int i = 0; i < 5; i++)
	{
		cout << "请输入姓名:";
		cin>>hero[i].name;
		cout << "请输入年龄:";
		cin >> hero[i].age;
		cout << "请输入阵营:";
		cin >> hero[i].camp;
	}
	int len = sizeof(hero) / sizeof(status);
	bubbleSort(hero, len);
	print(hero, len);
	system("pause");
	return 0;
}