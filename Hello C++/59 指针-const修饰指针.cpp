#include<iostream>
using namespace std;
//const����ָ�����������
int main()
{
	int a = 10;
	int b = 20;
	//const����ָ��-- - ����ָ��
	//ָ���ָ����Ը��ģ���ָ��ָ���ֵ�����Ը���
	const int* p1 = &a;
	*p1 = 20;//����
	p1 = &b;//����

	//const���γ���-- - ָ�볣��
	//ָ���ָ�򲻿��Ը��ģ���ָ��ָ���ֵ���Ը���
	int* const p2 = &a;
	*p2 = 20;//����
	p2 = &b;//����

	//const������ָ�룬�����γ���
	//ָ���ָ�򲻿��Ը��ģ�ָ��ָ���ֵҲ�����Ը���
	const int* const p3 = &a;
	*p3 = 20;//����
	p3 = &b;//����
	system("pause");
	return 0;
}