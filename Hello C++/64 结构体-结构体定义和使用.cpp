//�﷨�� struct �ṹ����{ �ṹ���Ա�б� }��
//ͨ���ṹ�崴�������ķ�ʽ�����֣�
// struct �ṹ���� ������
// struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ... }
//����ṹ��ʱ˳�㴴������
#include<iostream>
using namespace std;
//����ѧ���������ͽṹ��
struct student
{
	//��Ա�б�
	string name;//����
	int age;//����
	int score;//����
}stu3;//�ṹ���������ʱ˳�㴴������(��������
int main()
{
	// struct �ṹ���� ������
	struct student stu1;//struct�ؼ��ֿ�ʡ��
	stu1.name = "�����";
	stu1.age = 18;
	stu1.score = 100;
	cout << " ������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;
	// struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ... }
	struct student stu2 = { "����",18,100 };
	cout << " ������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;
	system("pause");
	return 0;
}
//�ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
//�ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
//�ܽ�3���ṹ��������ò����� ''.''  ���ʳ�Ա