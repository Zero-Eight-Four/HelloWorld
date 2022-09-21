#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "请输入分数" << endl;
	cin >> score;
	cout << "您输入的分数为" << score << endl;
	/*
	if (条件) 
	{ 
	条件满足执行的语句 
	} 
	else 
	{ 
	条件不满足执行的语句 
	};
	*/
	if (score > 600)
	{
		cout << "恭喜您，考上了一般大学" << endl;
	}
	else
	{
		cout << "您是个什么铁废物" << endl;
	}
}