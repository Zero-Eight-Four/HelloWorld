//ͨ��ָ����ʽṹ���еĳ�Ա
//���ò�����->����ͨ���ṹ��ָ����ʽṹ������
#include<iostream>
#include<string>
using namespace std;
//����ṹ��
struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//����ѧ���ṹ�����
	struct student stu = { "����",18,100, };
	//ͨ��ָ��ָ��ṹ�����
	struct student* p=& stu;
	//ͨ��ָ����ʽṹ������е�����
	cout << " ������" << p->name << " ���䣺" << p->age << " ������" << p->score << wndl;
	system("pause");
	return 0;
}
