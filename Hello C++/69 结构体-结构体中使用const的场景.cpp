#include<iostream>
#include<string>
using namespace std;
//用const防止误操作

//创建学生数据类型结构体
struct student
{
	//成员列表
	string name;//名字
	int age;//年龄
	int score;//分数
};
//将形参改为指针可减少内存
void print(const student *stu)//加const后函数内不论运行什么都不会改变实参
{
	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;
}
int main()
{
	//创建结构体变量
	student s = { "张三",17,99 };
	//通过函数打印结构体信息
	print(&s);
	system("pause");
	return 0;
}