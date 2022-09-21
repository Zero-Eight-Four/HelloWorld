#include<iostream>
#include<iostream>
using namespace std;
//定义学生结构体
struct student
{
	string name;
	int age;
	int score;
};
//定义老师结构体
struct teacher
{
	string name;
	int age;
	struct student stu;
};
int main()
{
	//结构体嵌套结构体
	teacher t;
	t.age = 40;
	t.name = "张三";
	t.stu.age = 18;
	t.stu.name = "李四";
	t.stu.score = 99;
	cout << t.name << t.age << t.stu.name << t.stu.age << t.stu.score << endl;
	system("pause");
	return 0;
}
//在结构体中可以定义另一个结构体作为成员，用来解决实际问题