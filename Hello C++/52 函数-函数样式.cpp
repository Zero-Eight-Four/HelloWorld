//函数样式有
//有参有返
//有参无返
//无参有返
//无参无返
#include<iostream>
using namespace std;
//有参有返
int test01(int num1)
{
	int result = num1 + 1;
	return result;
}
//有参无返
void test02(int num2)
{
	cout << ++num2 << endl;
}
//无参有返
int test03()
{
	return 900;
}
//无参无返
void test04()
{
	cout << "666" << endl;
}
int main()
{
	int a = 1;
	cout << test01(a) << endl;
	test02(a);
	cout << test03() << endl;
	test04();
	system("pause");
	return 0;
}