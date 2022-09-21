#include<iostream>
#include<string>
using namespace std;
//结构体数组
//定义结构体
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//创建一个结构体数组
	struct student arr[3];
	//给结构体中的数组赋值
	for (int i = 0; i < 3; i++)
	{
		cout << "请输入第" << i + 1 << "个人的姓名：";
		cin >> arr[i].name;
		cout << "请输入第" << i + 1 << "个人的年龄：";
		cin >> arr[i].age;
		cout << "请输入第" << i + 1 << "个人的分数：";
		cin >> arr[i].score;
	}
	//遍历结构体数组
	cout << "编号\t" << "姓名\t" << "年龄\t" << "分数" << endl;
	for (int i = 0; i < 3;i++)
	{
		cout <<i+1<<"\t"<< arr[i].name<<"\t"<< arr[i].age <<"\t" << arr[i].score << endl;
	}
	system("pause");
	return 0;
}