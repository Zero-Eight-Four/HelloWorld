#include<iostream>
using namespace std;
//值传递
void swap1(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
//地址传递
void swap2(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
int main() {
	int a = 10;
	int b = 20;
	swap1(a, b); // 值传递不会改变实参	
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap2(&a, &b); //地址传递会改变实参
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}
//如果不想修改实参，就用值传递，如果想修改实参，就用地址传递

