#include<iostream>
using namespace std;
//ֵ����
//����ʹ�������ֽ���
//�����������Ҫ����ֵ����viod,Ҳ����дreturn
void swap(int num1, int num2)
{
	cout << "����ǰ:" << num1 << " " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������:" << num1 << " " << num2 << endl;
}
int main()
{
	//����swap��������a��b
	int a;
	int b;
	cin >> a;
	cin >> b;
	swap(a, b);//�������βη����ı䲻��Ӱ��ʵ��
	system("pause");
	return 0;
	//�ܽ᣺ ֵ����ʱ���β������β���ʵ�ε�
}