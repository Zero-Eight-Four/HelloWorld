//可以无条件跳转语句
//不建议使用
//作用：可以无条件跳转语句
//语法：goto 标记; 
//解释：如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
#include<iostream>
using namespace std;
int main()
{
	cout << "1" << endl;
	cout << "2" << endl;
	goto fly;//跳到fly标记处
	cout << "3" << endl;
	cout << "4" << endl;
	cout << "5" << endl;
	cout << "6" << endl;
	cout << "7" << endl;
	fly:
	cout << "8" << endl;
	cout << "9" << endl;
	system("pause");
	return 0;
}