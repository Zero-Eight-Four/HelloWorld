#include<iostream>
using namespace std;
//���ã����߱������������Ƽ���ε��ú�����������ʵ��������Ե������塣
//�������������Զ�Σ����Ǻ����Ķ���ֻ����һ�Σ���������������Է���main����
int max(int a, int b);
int max(int a, int b);

int main() {

	int a = 100;
	int b = 200;

	cout << max(a, b) << endl;

	system("pause");

	return 0;
}
//����
int max(int a, int b)
{
	return a > b ? a : b;
}
