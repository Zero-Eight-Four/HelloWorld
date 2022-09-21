#include<iostream>
using namespace std;
int main() {

	int a = 10;

	int* p;
	p = &a; //指针指向数据a的地址
	cout << *p << endl;              //* 解引用
	cout << sizeof(p) << endl;       //指针占用内存
	cout << sizeof(char*) << endl;   //字符型占用内存
	cout << sizeof(float*) << endl;  //单精度浮点数占用内存
	cout << sizeof(double*) << endl; //双精度浮点数占用内存
	system("pause");
	return 0;
}
//32位系统下占用4个字节，64位下占用8个字节