//���ã�������������ʾС��
// ��������Ϊ����
// 1�������� float 4�ֽ� 7λ��Ч����
// 2��˫���� double 8�ֽ� 15~16λ��Ч����
// ���嵥���ȱ���ʱ ���ֺ�Ӧ��һ��f С��Ĭ����˫���ȡ�
#include<iostream>
using namespace std;
int main()
{
	float num1 = 1.23f;
	double num2 = 1.23;
	cout << "num1 = " << num1 << endl;
	cout << "num1ռ�ÿռ�Ϊ" << sizeof(num1) << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num2ռ�ÿռ�Ϊ" << sizeof(num2) << endl;
	//��ѧ��������ʾС��
	float num3 = 1e-2f;//3 * 10^-2 AeB = A * 10^B
	cout << "num3 = " << num3 << endl;
	system("pause");
	return 0;
}