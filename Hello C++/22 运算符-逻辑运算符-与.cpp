#include <iostream>
using namespace std;
// ���ڸ��ݱ��ʽ��ֵ������ֵ���ֵ
// �����·���
/*
|����| ���� |   ʾ��   |                       ���                               |
| && |  ��  | a && b   | ���a��b��Ϊ�棬����Ϊ�棬����Ϊ�١�                   |
*/
//���桱�ó�0�������������ʾ�� ���١������֡�0������ʾ��
int main()
{
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;// 1
	a = 0;
	cout << (a && b) << endl;// 0
	a = 10;
	b = 0;
	cout << (a && b) << endl;// 0
	a = 0;
	b = 0;
	cout << (a && b) << endl;// 0
	system("pause");
	return 0;
	//ͬ��Ϊ�棬����Ϊ��
}