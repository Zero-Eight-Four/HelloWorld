#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "���������" << endl;
	cin >> score;
	cout << "������ķ���Ϊ" << score << endl;
	/*
	if (����) 
	{ 
	��������ִ�е���� 
	} 
	else 
	{ 
	����������ִ�е���� 
	};
	*/
	if (score > 600)
	{
		cout << "��ϲ����������һ���ѧ" << endl;
	}
	else
	{
		cout << "���Ǹ�ʲô������" << endl;
	}
}