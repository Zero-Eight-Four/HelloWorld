#include<iostream>
using namespace std;
//���ṹ����Ϊ�����������뺯��
//�����ִ��ݷ�ʽ
//ֵ����
//��ַ����


//����ѧ���������ͽṹ��
struct student
{
	//��Ա�б�
	string name;//����
	int age=0;//����
	int score=0;//����
};
//ֵ����
void Print(student stu)
{
	stu.age = 28;
	cout << "�Ӻ���1�� ѧ��������"<< stu.name<<" ���䣺"<< stu.age <<" ������"<< stu.score <<endl;
}
void Change(student &stu)
{
	stu.age = 28;
	cout << "�Ӻ���2�� ѧ��������" << stu.name << " ���䣺" << stu.age << " ������" << stu.score << endl;
}
void change(student *stu)
{
	stu->age = 38;
	cout << "�Ӻ���3�� ѧ��������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;
}
int main()
{
	//�����ṹ�����
	student s;
	s.age = 18;
	s.name = "����";
	s.score = 99;
	cout << "main������ ѧ��������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
	Print(s);
	cout << "�����Ӻ���1��main������ ѧ��������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
	Change(s);
	cout << "�����Ӻ���2��main������ ѧ��������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
	change(&s);
	cout << "�����Ӻ���3��main������ ѧ��������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;

	system("pause");
	return 0;
}