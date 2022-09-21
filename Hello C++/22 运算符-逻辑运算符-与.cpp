#include <iostream>
using namespace std;
// 用于根据表达式的值返回真值或假值
// 有以下符号
/*
|运算| 术语 |   示例   |                       结果                               |
| && |  与  | a && b   | 如果a和b都为真，则结果为真，否则为假。                   |
*/
//“真”用除0以外的数字来表示， “假”用数字“0”来表示。
int main()
{
	int a = 10;
	int b = 10;
	cout << (a && b) << endl;// 1
	a = 0;
	cout << (a && b) << endl;// 0
	a = 10;
	b = 0;
	cout << (a && b) << endl;// 0
	a = 0;
	b = 0;
	cout << (a && b) << endl;// 0
	system("pause");
	return 0;
	//同真为真，其余为假
}