//����������
//���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
//ͨ��ð��������㷨���������е�Ӣ�۰�������������� �����մ�ӡ�����Ľ����
#include<iostream>
#include<string>
using namespace std;
struct status
{
	string name;
	int age = 0;
	string camp;
};
void bubbleSort (status arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len -1 - i; j++)
		{
			if (arr[j].age>arr[j+1].age)
			{
				//��������������һλ
				status temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]= temp;
			}
		}
	}
}
void print(status arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].name << "\t" << arr[i].age << "\t" << arr[i].camp << endl;
	}
}
int main()
{
	//����Ӣ������
	status hero[5];
	//����Ӣ������
	for (int i = 0; i < 5; i++)
	{
		cout << "����������:";
		cin>>hero[i].name;
		cout << "����������:";
		cin >> hero[i].age;
		cout << "��������Ӫ:";
		cin >> hero[i].camp;
	}
	int len = sizeof(hero) / sizeof(status);
	bubbleSort(hero, len);
	print(hero, len);
	system("pause");
	return 0;
}