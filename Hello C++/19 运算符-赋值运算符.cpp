#include <iostream>
//作用：用于将表达式的值赋给变量
//语法
/*
|   运算符   |   术语   |   示例     |    结果   |
| ---------- | -------- | ---------- | --------- |
| =          | 赋值     | a=2; b=3;  | a=2; b=3; |
| +=         | 加等于   | a=0; a+=2; | a=2;      |
| -=         | 减等于   | a=5; a-=3; | a=2;      |
| *=         | 乘等于   | a=2; a*=2; | a=4;      |
| /=         | 除等于   | a=4; a/=2; | a=2;      |
| %=         | 模等于   | a=3; a%2;  | a=1;      |
*/
using namespace std;
int main()
{
	// =
	int a;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	// +=
	int b;
	cout << "请输入需要相加的值" << endl;
	cin >> b;
	a += b;
	cout << "a与此相加后 a = " << a << endl;
	// -=
	cout << "请输入需要相减的值" << endl;
	cin >> b;
	a -= b;
	cout << "a与此相减后 a = " << a << endl;
	// *=
	cout << "请输入需要相乘的值" << endl;
	cin >> b;
	a *= b;
	cout << "a与此相乘后 a = " << a << endl;	
	// /=	
	cout << "请输入需要相除的值" << endl;
	cin >> b;
	a /= b;
	cout << "a与此相除后 a = " << a << endl;
	// %= 
	cout << "请输入需要取模的值" << endl;
	cin >> b;
	a %= b;
	cout << "a与此取模后 a = " << a << endl;
	//以上
	system("pause");
	return 1;
}