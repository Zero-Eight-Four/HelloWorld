#include<iostream>
using namespace std;
int main() {

	int a = 10;

	int* p;
	p = &a; //ָ��ָ������a�ĵ�ַ
	cout << *p << endl;              //* ������
	cout << sizeof(p) << endl;       //ָ��ռ���ڴ�
	cout << sizeof(char*) << endl;   //�ַ���ռ���ڴ�
	cout << sizeof(float*) << endl;  //�����ȸ�����ռ���ڴ�
	cout << sizeof(double*) << endl; //˫���ȸ�����ռ���ڴ�
	system("pause");
	return 0;
}
//32λϵͳ��ռ��4���ֽڣ�64λ��ռ��8���ֽ�