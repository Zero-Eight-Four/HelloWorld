/*
��������
��ʾ�û�����һ���߿����Է��������ݷ����������ж�
�����������600����Ϊ����һ��������500�ֿ��϶���������400����������������Ϊδ���ϱ��ƣ�
��һ�������У��������700�֣����뱱�󣬴���650�֣������廪������600�����˴�
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "���������" << endl;
	int score;
	cin >> score;
	cout << "������ķ���Ϊ" << score << endl;
	if (score >= 600)
	{
		if (score >= 700)
		{
			cout << "��ϲ���������山" << endl;
		}
		else if (score >= 650)
		{
			cout << "��ϲ�������˸�������" << endl;
		}
		else
		{
			cout << "��ϲ��������һ���ѧ" << endl;
		}
	}
	else if (score >= 500)
	{
		cout << "��ϲ��������һ����ѧ" << endl;
	}
	else if (score >= 400)
	{
		cout << "��ϲ�������˶�����ѧ" << endl;
	}
	else
	{
		cout << "���Ǹ�ʲô������" << endl;
	}
	system("pause");
	return 0;
}