//数据的输入
// 作用：用于从键盘获取数据
// 关键字：cin
// 语法：cin >> 变量
#include<iostream>
using namespace std;
int main()
{
	//整型输入
	int a;
	cout << "请输入整型变量a" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	//浮点型输入
	double b;
	cout << "请输入浮点型变量b" << endl;
	cin >> b;
	cout << "b = " << b << endl;
	//字符型输入
	char ch;
	cout << "请输入字符型变量ch" << endl;
	cin >> ch;
	cout << "ch = " << ch << endl;
	//字符串型输入
	string str;
	cout << "请输入字符串型变量str" << endl;
	cin >> str;
	cout << "str = " << str << endl;
	//布尔型输入
	bool flag;
	cout << "请输入布尔型变量flag" << endl;
	cin >> flag;
	cout << "flag = " << flag << endl;
	system("pause");
	return EXIT_SUCCESS;
}