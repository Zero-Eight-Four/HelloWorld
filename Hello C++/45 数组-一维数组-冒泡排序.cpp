//��õ������㷨����������Ԫ�ؽ�������
//1. �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
//2. ��ÿһ������Ԫ����ͬ���Ĺ�����ִ����Ϻ��ҵ���һ�����ֵ��
//3. �ظ����ϵĲ��裬ÿ�αȽϴ��� - 1��ֱ������Ҫ�Ƚ�
#include<iostream>
using namespace std;
int main() 
{
	int arr[10]={};
	cout << "������ʮ�����ڵ�����" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "�������" << i + 1 << "�����֣�";
		cin >> arr[i];
	}
	cout << "�����������Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		cout <<arr[i]<<" "; 
	}
	cout << endl;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//��������������һλ
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "����������Ϊ��";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] <<" ";
	}
	system("pause");
	return 0;
}