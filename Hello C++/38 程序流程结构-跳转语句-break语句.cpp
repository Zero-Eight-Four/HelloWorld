#include<iostream>
using namespace std;
/*
break语句
作用: 用于跳出==选择结构==或者==循环结构==
break使用的时机：
 出现在switch条件语句中，作用是终止case并跳出switch
 出现在循环语句中，作用是跳出当前的循环语句
 出现在嵌套循环中，跳出最近的内层循环语句
*/
int main()
{
	//switch语句中
	int select;
	cout <<  "1\n2\n3\n4\n5" << "\n请选择一个数" << endl;
	cin >> select;
	switch (select)
	{
	case 1:cout << "您选择的是" << select << endl; break;
	case 2:cout << "您选择的是" << select << endl; break;
	case 3:cout << "您选择的是" << select << endl; break;
	case 4:cout << "您选择的是" << select << endl; break;
	case 5:cout << "您选择的是" << select << endl; break;
	default:cout << "严肃点，别乱输" << endl; break;
	}
	//循环语句中
	int num = 0;
	for ( num ; num < 100; num++)
	{
		cout << num << endl;
		if (num == 6)
		{
			break;//输出到6时break跳出循环
		}
	}
	//嵌套循环中
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << j <<" ";
			if (j == 6)
			{
				break;//输出到6时退出这个内层循环
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}