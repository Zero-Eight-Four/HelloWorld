#include<iostream>
using namespace std;
//作用：满足循环条件，执行循环语句
//语法：while（循环条件）{循环语句}
int main()
{
	long long num =0 ;
	while (num <= 9999999999999999999)
	{
		cout << num << endl;
		++num;
	}
	system("pause");
	return 0;
	//只要循环条件为真就一直进行循环
	//必须提供一个退出出口，否则会死循环
}