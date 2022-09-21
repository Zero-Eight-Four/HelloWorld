#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "请输入分数" << endl;
	cin >> score;
	cout << "您输入的分数为：" << score << endl;
	//判断分数是否大于600
	//if条件后不用加分号
	if (score >= 600)
	{
		cout << "恭喜您，考上了一般大学" << endl;
	}
	system("pause");
	return 0;
}