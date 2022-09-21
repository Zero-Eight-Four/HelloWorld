//语法： struct 结构体名{ 结构体成员列表 }；
//通过结构体创建变量的方式有三种：
// struct 结构体名 变量名
// struct 结构体名 变量名 = { 成员1值 ， 成员2值... }
//定义结构体时顺便创建变量
#include<iostream>
using namespace std;
//创建学生数据类型结构体
struct student
{
	//成员列表
	string name;//名字
	int age;//年龄
	int score;//分数
}stu3;//结构体变量创建时顺便创建变量(不建议用
int main()
{
	// struct 结构体名 变量名
	struct student stu1;//struct关键字可省略
	stu1.name = "大聪明";
	stu1.age = 18;
	stu1.score = 100;
	cout << " 姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;
	// struct 结构体名 变量名 = { 成员1值 ， 成员2值... }
	struct student stu2 = { "张三",18,100 };
	cout << " 姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;
	system("pause");
	return 0;
}
//总结1：定义结构体时的关键字是struct，不可省略
//总结2：创建结构体变量时，关键字struct可以省略
//总结3：结构体变量利用操作符 ''.''  访问成员