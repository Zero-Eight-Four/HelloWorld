#include<iostream>
using namespace std;
//����ָ����������е�Ԫ��
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,0};
	cout << "��һ��Ԫ��Ϊ" << arr[0] << endl;
	int* p = arr;//ָ�������ָ��
	//arr���������׵�ַ
	//����ָ���������
	for (int i = 0; i < 10; i++)
	{
		cout << "�����еĵ�" << i + 1 << "��Ԫ��Ϊ��" << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}