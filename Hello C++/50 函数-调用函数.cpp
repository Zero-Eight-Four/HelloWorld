#include<iostream>
using namespace std;
//���ã�ʹ�ö���õĺ���
//�﷨����������������
int add(int num1, int num2)//num1��num2������ʵ���ڣ����β�
{
    int sum = num1 + num2;
    return sum;
}
int main() 
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	int sum = add(a, b);//a��b��ʵ��//��������˳���붨�庯��ʱ��˳��һ��
	cout << sum;
	system("pause");
	return 0;
}
//�ܽ᣺����������С�����ڳ�Ϊ�βΣ���������ʱ����Ĳ�����Ϊʵ��