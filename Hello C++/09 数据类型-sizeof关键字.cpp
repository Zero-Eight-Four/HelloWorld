//作用：利用sizeof关键字可以统计数据类型所占内存大小
//语法：sizeof（ 数据类型 or 变量 ）；
#include<iostream>
using namespace std;
int main()
{
	short num1 = 10;
	int num2 = 20;
	long num3 = 30;
	long long num4 = 40;
	cout << "num1 = " << num1 << endl;
	cout << "num1占用空间为" << sizeof(num1) << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num2占用空间为" << sizeof(num2) << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num3占用空间为" << sizeof(num3) << endl;
	cout << "num4 = " << num4 << endl;
	cout << "num4占用空间为" << sizeof(num4) << endl;
	system("pause");
	return 0;
}