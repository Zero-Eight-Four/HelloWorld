/* 
��������:ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������
���磺1 ^ 3 + 5 ^ 3 + 3 ^ 3 = 153
������do...while��䣬�������3λ���е�ˮ�ɻ���
*/
#include<iostream>
using namespace std;
int main()
{
	int num = 100;
	int a;
	int b;
	int c;
	int result;
	do
	{
		a = num % 10;     //��ȡ��λ��
		b = num / 10 % 10;//��ȡʮλ��
		c = num / 100;    //��ȡ��λ��
		if ( a*a*a+b*b*b+c*c*c == num)
		{
			cout << num << "��һ��ˮ�ɻ���" << endl;
		}
		num++;
	} while (num < 1000);
	system("pause");
	return 0;
}