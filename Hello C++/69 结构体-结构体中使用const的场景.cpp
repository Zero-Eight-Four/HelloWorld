#include<iostream>
#include<string>
using namespace std;
//��const��ֹ�����

//����ѧ���������ͽṹ��
struct student
{
	//��Ա�б�
	string name;//����
	int age;//����
	int score;//����
};
//���βθ�Ϊָ��ɼ����ڴ�
void print(const student *stu)//��const�����ڲ�������ʲô������ı�ʵ��
{
	cout << "������" << stu->name << " ���䣺" << stu->age << " ������" << stu->score << endl;
}
int main()
{
	//�����ṹ�����
	student s = { "����",17,99 };
	//ͨ��������ӡ�ṹ����Ϣ
	print(&s);
	system("pause");
	return 0;
}