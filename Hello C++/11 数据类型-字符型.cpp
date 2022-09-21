#include<iostream>
using namespace std;
//作用：字符型变量用于显示单个字母
//语法：char ch = 'a'
//显示字符变量时用单引号
//一个单引号内只能引用一个字符
//字符型变量只占用一个字节
// 字符型变量并不是将字符放到内存中存储，而是将对应的ASCII编码放入储存单元
//
int main()
{
	char ch1 = 'A';
	char ch2 = 'a';
	cout << "ch1 = " << ch1 << endl;
	cout << "ch1占用空间为" << sizeof(ch1) << endl;
	cout << "ch2 = " << ch2 << endl;
	cout << "ch2占用空间为" << sizeof(ch2) << endl;
	//查看字符对应ASCII编码
	// A - 65
	//a - 97
	cout << "A对应ASCII编码为 " << (int)ch1 << endl;
	cout << "a对应ASCII编码为 " << (int)ch1 << endl;
	system("pause");
	return 0;
}