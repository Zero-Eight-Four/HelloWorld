#include<iostream>
using namespace std;
int main()
{
	int weight[5]={};
	cout << "�������һֻС�������" << endl;
	cin >> weight[0];
	cout << "������ڶ�ֻС�������" << endl;
	cin >> weight[1];
	cout << "���������ֻС�������" << endl;
	cin >> weight[2];
	cout << "���������ֻС�������" << endl;
	cin >> weight[3];
	cout << "���������ֻС�������" << endl;
	cin >> weight[4];
	int max = 0;
	int num = 0;
	for (int i=0; i<5; i++)
	{
		if (max < weight[i])
		{
			max = weight[i];
		}
	}
	for (int j = 0; j < 5; j++)
	{
		if (max == weight[j])
		{
			num = j + 1;
		}
	}
	cout << "���ص�С������Ϊ" << max << endl;
	cout << "���ص�С��Ϊ��" << num << "ֻ" << endl;
	system("pause");
	return 0;
}