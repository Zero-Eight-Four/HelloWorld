#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "���������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ" << endl;
	if (score > 600)
	{
		cout << "��ϲ��������һ���ѧ" << endl;
	}
	else if (score > 400 && score <= 500)
	{
		cout << "��ϲ�������˶�����ѧ" << endl;
	}
	else if ( score > 500 && score<=600 )
	{
		cout << "��ϲ�㿼����һ����ѧ" << endl;
	}
	else
	{
		cout << "���Ǹ�ʲô������" << endl;
	}
	system("pause");
	return 0;
}