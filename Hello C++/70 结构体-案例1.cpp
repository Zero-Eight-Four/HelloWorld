//案例描述：
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//最终打印出老师数据以及老师所带的学生数据。
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
	//学生姓名
	string sName;
	//学生分数
	int score;
};
struct teacher
{
	//老师姓名
	string tName;
	//学生数组
	student sArray[5];
};
//给老师和学生赋值的函数
void allocateSpace(teacher* a, int len)
{
	string NameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		a[i].tName = "Teacher_";
		a[i].tName += NameSeed[i];
		//通过循环给每名老师带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			a[i].sArray[j].sName = "Student_" ;
			a[i].sArray[j].sName += NameSeed[j];
			a[i].sArray[j].score = rand() % 41 + 60;
		}
	}
}
void PrintInfo(teacher*a, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << a[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "  \t" << "学生姓名：" << a[i].sArray[j].sName << endl;
			cout << "  \t" << "学生分数：" << a[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//生成随机数
	srand((unsigned)time(NULL));//随机数种子，要声明ctime
	//创建三名老师的数组
	struct teacher tArray[3];
	//通过函数给三名老师的信息赋值，并给老师的学生的信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//打印所有老师和学生的信息
	PrintInfo(tArray, len);
	system("pause");
	return 0;
}