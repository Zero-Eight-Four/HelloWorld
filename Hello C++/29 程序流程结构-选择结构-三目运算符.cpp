#include<iostream>
using namespace std;
//作用：通过三目运算符实现简单地判断
//语法：表达式1 ？表达式2 :表达式3；
//如果表达式1为真，执行表达式2：如果表达式1为假，执行表达式3
int main()
{
	//例
	//创建三个变量abc，给ab赋值，讲ab中较大的值赋给c
	int a;
	int b;
	int c;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	a > b ? c = a : c = b;//三目运算符中可以执行语句，也可以返回变量赋值
	(a < b ? a : b) = c;    //将ab中较大的变量值赋给较小的变量
	cout <<"c的值为 " << c << endl;
	cout << a << "\n" << b << "\n" << c << endl;
	system("pause");
	return 0;
}