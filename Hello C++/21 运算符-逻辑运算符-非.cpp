#include <iostream>
using namespace std;
// 用于根据表达式的值返回真值或假值
// 有以下符号
/*
|运算| 术语 | 示例 |                       结果                               |
| !  |  非  |  !a  | 如果a为假，则!a为真；  如果a为真，则!a为假。             |
*/
//“真”用除0以外的数字来表示， “假”用数字“0”来表示。
int main()
{
	int a = 10;
	cout << a << endl;  // 10
	cout << !a << endl; // 0
	cout << !!a << endl;// 1
	system("pause");
	return 0;	
	//真变假，假变真
}