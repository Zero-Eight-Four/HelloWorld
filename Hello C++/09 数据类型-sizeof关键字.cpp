//���ã�����sizeof�ؼ��ֿ���ͳ������������ռ�ڴ��С
//�﷨��sizeof�� �������� or ���� ����
#include<iostream>
using namespace std;
int main()
{
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	cout << "num1 = " << num1 << endl;
	cout << "num1ռ�ÿռ�Ϊ" << sizeof(num1) << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num2ռ�ÿռ�Ϊ" << sizeof(num2) << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num3ռ�ÿռ�Ϊ" << sizeof(num3) << endl;
	cout << "num4 = " << num4 << endl;
	cout << "num4ռ�ÿռ�Ϊ" << sizeof(num4) << endl;
	system("pause");
	return 0;
}