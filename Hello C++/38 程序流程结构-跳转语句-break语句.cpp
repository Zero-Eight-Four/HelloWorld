#include<iostream>
using namespace std;
/*
break���
����: ��������==ѡ��ṹ==����==ѭ���ṹ==
breakʹ�õ�ʱ����
 ������switch��������У���������ֹcase������switch
 ������ѭ������У�������������ǰ��ѭ�����
 ������Ƕ��ѭ���У�����������ڲ�ѭ�����
*/
int main()
{
	//switch�����
	int select;
	cout <<  "1\n2\n3\n4\n5" << "\n��ѡ��һ����" << endl;
	cin >> select;
	switch (select)
	{
	case 1:cout << "��ѡ�����" << select << endl; break;
	case 2:cout << "��ѡ�����" << select << endl; break;
	case 3:cout << "��ѡ�����" << select << endl; break;
	case 4:cout << "��ѡ�����" << select << endl; break;
	case 5:cout << "��ѡ�����" << select << endl; break;
	default:cout << "����㣬������" << endl; break;
	}
	//ѭ�������
	int num = 0;
	for ( num ; num < 100; num++)
	{
		cout << num << endl;
		if (num == 6)
		{
			break;//�����6ʱbreak����ѭ��
		}
	}
	//Ƕ��ѭ����
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << j <<" ";
			if (j == 6)
			{
				break;//�����6ʱ�˳�����ڲ�ѭ��
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}