//����������
//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
struct student
{
	//ѧ������
	string sName;
	//ѧ������
	int score;
};
struct teacher
{
	//��ʦ����
	string tName;
	//ѧ������
	student sArray[5];
};
//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(teacher* a, int len)
{
	string NameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		a[i].tName = "Teacher_";
		a[i].tName += NameSeed[i];
		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
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
		cout << "��ʦ������" << a[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "  \t" << "ѧ��������" << a[i].sArray[j].sName << endl;
			cout << "  \t" << "ѧ��������" << a[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned)time(NULL));//��������ӣ�Ҫ����ctime
	//����������ʦ������
	struct teacher tArray[3];
	//ͨ��������������ʦ����Ϣ��ֵ��������ʦ��ѧ������Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//��ӡ������ʦ��ѧ������Ϣ
	PrintInfo(tArray, len);
	system("pause");
	return 0;
}