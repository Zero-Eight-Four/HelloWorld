//һά���鶨������ַ�ʽ�� 
#include<iostream>
using namespace std;
int main()
{
	//Ԫ���±��0��ʼ����
	//1.  ��������  ������[���鳤��];
	int arr1[5]={0,0,0,0,0};
	cout << "�������һ��ֵ" << endl;
	cin >> arr1[0];
	cout << "������ڶ���ֵ" << endl;
	cin >> arr1[1];
	cout << "�����������ֵ" << endl;
	cin >> arr1[2];
	cout << "��������ĸ�ֵ" << endl;
	cin >> arr1[3];
	cout << "����������ֵ" << endl;
	cin >> arr1[4];
	cout << "������ֵΪ " << arr1[2] << endl;//��ȡ�����5�������еĵ�����
	//2. ��������  ������[���鳤��] = { ֵ1��ֵ2 ... };
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}
	//3. ��������  ������[] = { ֵ1��ֵ2 ... }; 
	int arr3[] = {10,20,30,40,50,60,70,80,90,100};
	for (int i = 0; i < 12; i++)
	{
		cout << arr3[i] << endl;
	}
	system("pause");
	return 0;
}