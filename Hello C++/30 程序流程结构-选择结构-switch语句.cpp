#include<iostream>
using namespace std;
//����:ִ�ж�������֧���
/*
switch(���ʽ)
{
	case ���1��ִ�����;break;
	case ���2��ִ�����;break;
	...
	default:ִ�����;break;
}
*/
int main()
{
	int score;
	cout << "������һ������ֵ��0~10֮��" << endl;
	cin >> score;
	switch (score)
	{
	case 10:
	case 9:
		cout << "������" << endl; 
		break;
	case 8:
	case 7:
		cout << "���е�" << endl; 
		break;
	case 6:
	case 5:
		cout << "������" << endl; 
		break;
	default:
		cout << "�����" << endl;
	}
	system("pause");
	return 0;
	//ȱ�㣺ֻ���ж����ͺ��ַ��ͣ���������һ������
	//�ŵ㣺�ṹ������ִ��Ч�ʸ�
}