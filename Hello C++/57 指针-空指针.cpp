//空指针 ：指针变量指向内存中编号为0的空间 0~255是系统保留内存，用户不可访问
//用途：初始化指针变量
//注意：空指针指向的内存是不可以访问的
#include<iostream>
using namespace std;
int main()
{
	////空指针 初始化指针变量
	int* p = NULL;
	cout << *p << endl;//不可访问
}
