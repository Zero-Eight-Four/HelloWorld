#include<iostream>
using namespace std;
//���ã�ͨ����Ŀ�����ʵ�ּ򵥵��ж�
//�﷨�����ʽ1 �����ʽ2 :���ʽ3��
//������ʽ1Ϊ�棬ִ�б��ʽ2��������ʽ1Ϊ�٣�ִ�б��ʽ3
int main()
{
	//��
	//������������abc����ab��ֵ����ab�нϴ��ֵ����c
	int a;
	int b;
	int c;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	a > b ? c = a : c = b;//��Ŀ������п���ִ����䣬Ҳ���Է��ر�����ֵ
	(a < b ? a : b) = c;    //��ab�нϴ�ı���ֵ������С�ı���
	cout <<"c��ֵΪ " << c << endl;
	cout << a << "\n" << b << "\n" << c << endl;
	system("pause");
	return 0;
}