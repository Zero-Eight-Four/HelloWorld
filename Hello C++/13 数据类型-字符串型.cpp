#include<iostream>
#include<string> //使用C++风格字符串时需要申明这个头文件
using namespace std;
int main()
{
	//C风格字符串
	//注意事项 char 字符串名 [] = "变量值";
	//要用双引号
	char str[] = "Hello World";
	cout << str << endl;
	//C++风格字符串
	//需要包含一个头文件 #include<string>
	string str2 = "Hello C++";
	cout << str2 << endl;
	system("pause");
	return 0;
}