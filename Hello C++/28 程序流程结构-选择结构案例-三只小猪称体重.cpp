//��������ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС������
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	cout << "�������һֻС��a������(��λkg)" << endl;
	cin >> a;
	cout << "������ڶ�ֻС��b������(��λkg)" << endl;
	cin >> b;
	cout << "���������ֻС��c������(��λkg)" << endl;
	cin >> c;
	cout << "��һֻС��a����Ϊ" << a << "kg" << endl;
	cout << "�ڶ�ֻС��b����Ϊ" << b << "kg" << endl;
	cout << "����ֻС��c����Ϊ" << c << "kg" << endl;
	cout << "\n" << endl;
	if (a > b)
	{
		if (a > c)
		{
			cout << "��һֻС������" << endl;
			if (b > c)
			{
				cout << "�� a>b>c " << endl;
			}
			else if (b < c)
			{
				cout << "�� a>c>b " << endl;
			}
		}
		else if (a < c)
		{
			cout << "����ֻС������" << endl;
			cout << "�� c>a>b" << endl;
		}
	}
	else if (a < b)
	{
		if (b < c)
		{
			cout << "����ֻС������" << endl;
			cout << "�� c>b>a" << endl;
		}
		else if (b > c)
		{
			cout << "�ڶ�ֻС������" << endl;
			if (a > c)
			{
				cout << "�� b>a>c" << endl;
			}
			else if (a < c)
			{
				cout << "�� b>c>a" << endl;
			}
		}
	}
	system("pause");
	return 0;
}