#include<iostream>
using namespace std;
//作用：使用定义好的函数
//语法：函数名（参数）
int add(int num1, int num2)//num1和num2并不真实存在，是形参
{
    int sum = num1 + num2;
    return sum;
}
int main() 
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	int sum = add(a, b);//a和b是实参//两个参数顺序与定义函数时的顺序一致
	cout << sum;
	system("pause");
	return 0;
}
//总结：函数定义里小括号内称为形参，函数调用时传入的参数称为实参