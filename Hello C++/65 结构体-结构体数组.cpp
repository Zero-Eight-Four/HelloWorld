#include<iostream>
#include<string>
using namespace std;
//�ṹ������
//����ṹ��
struct student
{
	string name;
	int age;
	int score;
};
int main()
{
	//����һ���ṹ������
	struct student arr[3];
	//���ṹ���е����鸳ֵ
	for (int i = 0; i < 3; i++)
	{
		cout << "�������" << i + 1 << "���˵�������";
		cin >> arr[i].name;
		cout << "�������" << i + 1 << "���˵����䣺";
		cin >> arr[i].age;
		cout << "�������" << i + 1 << "���˵ķ�����";
		cin >> arr[i].score;
	}
	//�����ṹ������
	cout << "���\t" << "����\t" << "����\t" << "����" << endl;
	for (int i = 0; i < 3;i++)
	{
		cout <<i+1<<"\t"<< arr[i].name<<"\t"<< arr[i].age <<"\t" << arr[i].score << endl;
	}
	system("pause");
	return 0;
}