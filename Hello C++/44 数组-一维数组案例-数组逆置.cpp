#include<iostream>
using namespace std;
int main()
{
	cout << "������5������" << endl;
	int arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
		cout << "��������һ������" << endl;
	}
	cout << "����ǰ��" ;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i]<<" ";
	}
	//�ȼ�¼��ʼ�±�λ��
	//�ټ�¼�����±�λ��
	//��ʼ�±�������±�Ԫ�ػ���
	//��ʼλ��++������λ��--
	// ѭ��ִ�У�ֱ����ʼλ�á�=����λ��
	int start = 0;
	int end = (sizeof(arr) / sizeof(arr[0]) - 1);
	for (start; start <= end; start++, end--)
	{
		//����һ��temp��ʱ���arr[start]�����渳ֵ��arr[end]
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}
	cout << "\n���ú�";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}