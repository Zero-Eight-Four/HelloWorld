//C++规定在创建一个变量或常量时，必须要指定出相印的数据类型，否则无法给变量分配内存
//整型变量表示的是整数类型的数据
//有以下几种方式
//short 短整型 2字节 取值范围 （-2^15~2^15-1）
//int 整型 4字节 取值范围 （-2^31~2^31-1）
//long 长整型 win下4字节 linux下4字节（32位）8字节（64位）取值范围 （-2^31~2^31-1）
//long long 长长整型 8字节 取值范围 （-2^63~2^63-1）
//语法 数据类型 变量名称 = 变量初始值；
//数据类型存在意义：给变量分配合适内存空间
#include<iostream>
using namespace std;
int main()
{
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	system("pause");
	return 0;
}