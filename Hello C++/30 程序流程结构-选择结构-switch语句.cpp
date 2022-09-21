#include<iostream>
using namespace std;
//作用:执行多条件分支语句
/*
switch(表达式)
{
	case 结果1：执行语句;break;
	case 结果2：执行语句;break;
	...
	default:执行语句;break;
}
*/
int main()
{
	int score;
	cout << "请输入一个整数值在0~10之间" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
	case 9:
		cout << "神中神" << endl; 
		break;
	case 8:
	case 7:
		cout << "典中典" << endl; 
		break;
	case 6:
	case 5:
		cout << "烂中烂" << endl; 
		break;
	default:
		cout << "严肃点" << endl;
	}
	system("pause");
	return 0;
	//缺点：只能判断整型和字符型，不可以是一个区间
	//优点：结构清晰，执行效率高
}