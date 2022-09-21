#include<iostream>
using namespace std;
//const修饰指针有三种情况
int main()
{
	int a = 10;
	int b = 20;
	//const修饰指针-- - 常量指针
	//指针的指向可以更改，但指针指向的值不可以更改
	const int* p1 = &a;
	*p1 = 20;//报错
	p1 = &b;//正常

	//const修饰常量-- - 指针常量
	//指针的指向不可以更改，但指针指向的值可以更改
	int* const p2 = &a;
	*p2 = 20;//正常
	p2 = &b;//报错

	//const即修饰指针，又修饰常量
	//指针的指向不可以更改，指针指向的值也不可以更改
	const int* const p3 = &a;
	*p3 = 20;//报错
	p3 = &b;//报错
	system("pause");
	return 0;
}