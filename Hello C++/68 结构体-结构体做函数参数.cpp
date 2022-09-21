#include<iostream>
using namespace std;
//将结构体作为函数参数传入函数
//有两种传递方式
//值传递
//地址传递


//创建学生数据类型结构体
struct student
{
	//成员列表
	string name;//名字
	int age=0;//年龄
	int score=0;//分数
};
//值传递
void Print(student stu)
{
	stu.age = 28;
	cout << "子函数1中 学生姓名："<< stu.name<<" 年龄："<< stu.age <<" 分数："<< stu.score <<endl;
}
void Change(student &stu)
{
	stu.age = 28;
	cout << "子函数2中 学生姓名：" << stu.name << " 年龄：" << stu.age << " 分数：" << stu.score << endl;
}
void change(student *stu)
{
	stu->age = 38;
	cout << "子函数3中 学生姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}
int main()
{
	//创建结构体变量
	student s;
	s.age = 18;
	s.name = "张三";
	s.score = 99;
	cout << "main函数中 学生姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
	Print(s);
	cout << "运行子函数1后main函数中 学生姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
	Change(s);
	cout << "运行子函数2后main函数中 学生姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
	change(&s);
	cout << "运行子函数3后main函数中 学生姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

	system("pause");
	return 0;
}