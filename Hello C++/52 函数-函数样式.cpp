//������ʽ��
//�в��з�
//�в��޷�
//�޲��з�
//�޲��޷�
#include<iostream>
using namespace std;
//�в��з�
int test01(int num1)
{
	int result = num1 + 1;
	return result;
}
//�в��޷�
void test02(int num2)
{
	cout << ++num2 << endl;
}
//�޲��з�
int test03()
{
	return 900;
}
//�޲��޷�
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