#include<iostream>
using namespace std;
int main()
{
	//指针变量p指向内存地址编号为0x1100的空间
	int* p = (int*)0x1100;
	//访问野指针报错 
	//在程序运行中要避免出现野指针
	cout << *p << endl;
	system("pause");
	return 0;
}
//总结：空指针和野指针都不是我们申请的空间，因此不要访问。