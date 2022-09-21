#include<iostream>
using namespace std;
//值传递
//例，使两个数字交换
//如果函数不需要返回值可用viod,也不用写return
void swap(int num1, int num2)
{
	cout << "交换前:" << num1 << " " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后:" << num1 << " " << num2 << endl;
}
int main()
{
	//利用swap函数交换a，b
	int a;
	int b;
	cin >> a;
	cin >> b;
	swap(a, b);//函数的形参发生改变不会影响实参
	system("pause");
	return 0;
	//总结： 值传递时，形参是修饰不了实参的
}