# include<iostream>
using namespace std;
//作用:满足循环条件，执行循环语句

//语法:for (起始表达式; 条件表达式; 末尾循环体) { 循环语句; }
int main()
{
	int num = 0;
	for (num; num <= 100;)
	{
		cout << num << endl;
		num++;
	}
	system("pause");
	return 0;
}