#include<iostream>
using namespace std;
//ֵ����
void swap1(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
//��ַ����
void swap2(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main() {
	int a = 10;
	int b = 20;
	swap1(a, b); // ֵ���ݲ���ı�ʵ��	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap2(&a, &b); //��ַ���ݻ�ı�ʵ��
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
//��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����

