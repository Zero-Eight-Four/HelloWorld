#include<iostream>
using namespace std;
int main()
{
	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int* p = (int*)0x1100;
	//����Ұָ�뱨�� 
	//�ڳ���������Ҫ�������Ұָ��
	cout << *p << endl;
	system("pause");
	return 0;
}
//�ܽ᣺��ָ���Ұָ�붼������������Ŀռ䣬��˲�Ҫ���ʡ�