//宏常量用define定义
// 宏常量定义后不可修改
//用const修饰变量
//变量可修改，但const修饰的变量会成为常量，也不可修改
#include <iostream>
#define day 7
#define month 12
#define hour 24
#define min 60
#define sec 60
using namespace std;
int main()
{
	const int RMB = 1;
	cout << "一周有" << day << "天" << endl;
	cout << "一年有" << month << "月" << endl;
	cout << "一天有" << hour << "小时" << endl;
	cout << "一小时有" << min << "分钟" << endl;
	cout << "一分钟有" << sec << "秒" << endl;
	cout << "一块钱是" << RMB << "r" << endl;
	system("pause");
	return 0;
}