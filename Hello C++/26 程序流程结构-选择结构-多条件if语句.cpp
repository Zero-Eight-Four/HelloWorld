#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "请输入分数" << endl;
	cin >> score;
	cout << "您输入的分数为" << endl;
	if (score > 600)
	{
		cout << "恭喜您考上了一般大学" << endl;
	}
	else if (score > 400 && score <= 500)
	{
		cout << "恭喜您考上了二本大学" << endl;
	}
	else if ( score > 500 && score<=600 )
	{
		cout << "恭喜你考上了一本大学" << endl;
	}
	else
	{
		cout << "您是个什么铁废物" << endl;
	}
	system("pause");
	return 0;
}