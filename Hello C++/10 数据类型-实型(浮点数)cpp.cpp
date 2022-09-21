//作用：浮点数用来表示小数
// 浮点数分为两种
// 1、单精度 float 4字节 7位有效数字
// 2、双精度 double 8字节 15~16位有效数字
// 定义单精度变量时 数字后应加一个f 小数默认是双精度。
#include<iostream>
using namespace std;
int main()
{
	float num1 = 1.23f;
	double num2 = 1.23;
	cout << "num1 = " << num1 << endl;
	cout << "num1占用空间为" << sizeof(num1) << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num2占用空间为" << sizeof(num2) << endl;
	//科学计数法表示小数
	float num3 = 1e-2f;//3 * 10^-2 AeB = A * 10^B
	cout << "num3 = " << num3 << endl;
	system("pause");
	return 0;
}