#include <iostream>
using namespace std;
int main()
{
	// 前置递增
	int a;
	cout << "请输入a的值" << endl;
	cin >> a;
	++a; //让a+1
	cout << "a = " << a << endl;
	// 后置递增
	int b;
	cout << "请输入b的值" << endl;
	cin >> b;
	b++; //让b+1
	cout << "b = " << b << endl;
	// 前置递增与后置递增的区别
	// 前置递增先对变量进行++，再计算表达式
	// 下面是一个前置递增
	cout << "下面是一个前置递增" << endl;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	cout << "a = " << a << "\n++a * b = " << ++a * b << endl;
	// 后置递增先计算表达式，后对变量进行++
	// 下面是一个后置递增
	cout << "下面是一个后置递增" << endl;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	cout << "a = " << a << "\na++ * b = " << a++ * b << endl;
	system("pause");
	return 0;
	//递减同上
}