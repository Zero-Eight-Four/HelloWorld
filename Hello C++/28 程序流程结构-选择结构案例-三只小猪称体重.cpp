//需求：有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout << "请输入第一只小猪a的体重(单位kg)" << endl;
	cin >> a;
	cout << "请输入第二只小猪b的体重(单位kg)" << endl;
	cin >> b;
	cout << "请输入第三只小猪c的体重(单位kg)" << endl;
	cin >> c;
	cout << "第一只小猪a体重为" << a << "kg" << endl;
	cout << "第二只小猪b体重为" << b << "kg" << endl;
	cout << "第三只小猪c体重为" << c << "kg" << endl;
	cout << "\n" << endl;
	if (a > b)
	{
		if (a > c)
		{
			cout << "第一只小猪最重" << endl;
			if (b > c)
			{
				cout << "且 a>b>c " << endl;
			}
			else if (b < c)
			{
				cout << "且 a>c>b " << endl;
			}
		}
		else if (a < c)
		{
			cout << "第三只小猪最重" << endl;
			cout << "且 c>a>b" << endl;
		}
	}
	else if (a < b)
	{
		if (b < c)
		{
			cout << "第三只小猪最重" << endl;
			cout << "且 c>b>a" << endl;
		}
		else if (b > c)
		{
			cout << "第二只小猪最重" << endl;
			if (a > c)
			{
				cout << "且 b>a>c" << endl;
			}
			else if (a < c)
			{
				cout << "且 b>c>a" << endl;
			}
		}
	}
	system("pause");
	return 0;
}