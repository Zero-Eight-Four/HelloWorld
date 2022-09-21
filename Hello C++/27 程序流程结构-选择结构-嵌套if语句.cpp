/*
案例需求：
提示用户输入一个高考考试分数，根据分数做如下判断
分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "请输入分数" << endl;
	int score;
	cin >> score;
	cout << "您输入的分数为" << score << endl;
	if (score >= 600)
	{
		if (score >= 700)
		{
			cout << "恭喜您考上了清北" << endl;
		}
		else if (score >= 650)
		{
			cout << "恭喜您考上了复交华五" << endl;
		}
		else
		{
			cout << "恭喜您考上了一般大学" << endl;
		}
	}
	else if (score >= 500)
	{
		cout << "恭喜您考上了一本大学" << endl;
	}
	else if (score >= 400)
	{
		cout << "恭喜您考上了二本大学" << endl;
	}
	else
	{
		cout << "您是个什么铁废物" << endl;
	}
	system("pause");
	return 0;
}