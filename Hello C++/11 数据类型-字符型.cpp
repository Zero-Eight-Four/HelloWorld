#include<iostream>
using namespace std;
//���ã��ַ��ͱ���������ʾ������ĸ
//�﷨��char ch = 'a'
//��ʾ�ַ�����ʱ�õ�����
//һ����������ֻ������һ���ַ�
//�ַ��ͱ���ֻռ��һ���ֽ�
// �ַ��ͱ��������ǽ��ַ��ŵ��ڴ��д洢�����ǽ���Ӧ��ASCII������봢�浥Ԫ
//
int main()
{
	char ch1 = 'A';
	char ch2 = 'a';
	cout << "ch1 = " << ch1 << endl;
	cout << "ch1ռ�ÿռ�Ϊ" << sizeof(ch1) << endl;
	cout << "ch2 = " << ch2 << endl;
	cout << "ch2ռ�ÿռ�Ϊ" << sizeof(ch2) << endl;
	//�鿴�ַ���ӦASCII����
	// A - 65
	//a - 97
	cout << "A��ӦASCII����Ϊ " << (int)ch1 << endl;
	cout << "a��ӦASCII����Ϊ " << (int)ch1 << endl;
	system("pause");
	return 0;
}