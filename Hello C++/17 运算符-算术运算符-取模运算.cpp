//只有整型变量可以进行取模运算
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	//模是两数相除后的余数 如10除3余数为1
	//取模不可以是0
	//两小数不可以取模
	cout << "a取b的模=" << a % b << endl;
	//下面是另一种实现取模的方法
	cout << "下面是另一种实现取模方法" << endl;
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	cout << "通过另一种方法求得a取b的模=" << a - (b * (a / b)) << endl;
	system("pause");
	return 0;
}