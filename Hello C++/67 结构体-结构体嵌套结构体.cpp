#include<iostream>
#include<iostream>
using namespace std;
//����ѧ���ṹ��
struct student
{
	string name;
	int age;
	int score;
};
//������ʦ�ṹ��
struct teacher
{
	string name;
	int age;
	struct student stu;
};
int main()
{
	//�ṹ��Ƕ�׽ṹ��
	teacher t;
	t.age = 40;
	t.name = "����";
	t.stu.age = 18;
	t.stu.name = "����";
	t.stu.score = 99;
	cout << t.name << t.age << t.stu.name << t.stu.age << t.stu.score << endl;
	system("pause");
	return 0;
}
//�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������