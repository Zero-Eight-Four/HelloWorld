//���ݵ�����
// ���ã����ڴӼ��̻�ȡ����
// �ؼ��֣�cin
// �﷨��cin >> ����
#include<iostream>
using namespace std;
int main()
{
	//��������
	int a;
	cout << "���������ͱ���a" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	//����������
	double b;
	cout << "�����븡���ͱ���b" << endl;
	cin >> b;
	cout << "b = " << b << endl;
	//�ַ�������
	char ch;
	cout << "�������ַ��ͱ���ch" << endl;
	cin >> ch;
	cout << "ch = " << ch << endl;
	//�ַ���������
	string str;
	cout << "�������ַ����ͱ���str" << endl;
	cin >> str;
	cout << "str = " << str << endl;
	//����������
	bool flag;
	cout << "�����벼���ͱ���flag" << endl;
	cin >> flag;
	cout << "flag = " << flag << endl;
	system("pause");
	return EXIT_SUCCESS;
}