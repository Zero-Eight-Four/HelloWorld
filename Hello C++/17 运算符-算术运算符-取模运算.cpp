//ֻ�����ͱ������Խ���ȡģ����
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	//ģ���������������� ��10��3����Ϊ1
	//ȡģ��������0
	//��С��������ȡģ
	cout << "aȡb��ģ=" << a % b << endl;
	//��������һ��ʵ��ȡģ�ķ���
	cout << "��������һ��ʵ��ȡģ����" << endl;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	cout << "ͨ����һ�ַ������aȡb��ģ=" << a - (b * (a / b)) << endl;
	system("pause");
	return 0;
}