#include <iostream>
//���ã����ڽ����ʽ��ֵ��������
//�﷨
/*
|   �����   |   ����   |   ʾ��     |    ���   |
| ---------- | -------- | ---------- | --------- |
| =          | ��ֵ     | a=2; b=3;  | a=2; b=3; |
| +=         | �ӵ���   | a=0; a+=2; | a=2;      |
| -=         | ������   | a=5; a-=3; | a=2;      |
| *=         | �˵���   | a=2; a*=2; | a=4;      |
| /=         | ������   | a=4; a/=2; | a=2;      |
| %=         | ģ����   | a=3; a%2;  | a=1;      |
*/
using namespace std;
int main()
{
	// =
	int a;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	// +=
	int b;
	cout << "��������Ҫ��ӵ�ֵ" << endl;
	cin >> b;
	a += b;
	cout << "a�����Ӻ� a = " << a << endl;
	// -=
	cout << "��������Ҫ�����ֵ" << endl;
	cin >> b;
	a -= b;
	cout << "a�������� a = " << a << endl;
	// *=
	cout << "��������Ҫ��˵�ֵ" << endl;
	cin >> b;
	a *= b;
	cout << "a�����˺� a = " << a << endl;	
	// /=	
	cout << "��������Ҫ�����ֵ" << endl;
	cin >> b;
	a /= b;
	cout << "a�������� a = " << a << endl;
	// %= 
	cout << "��������Ҫȡģ��ֵ" << endl;
	cin >> b;
	a %= b;
	cout << "a���ȡģ�� a = " << a << endl;
	//����
	system("pause");
	return 1;
}