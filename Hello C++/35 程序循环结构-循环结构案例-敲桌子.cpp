//����������
//��1��ʼ��������100�� 
//������ָ�λ����7��
//��������ʮλ����7��
//���߸�������7�ı�����
//���Ǵ�ӡ�����ӣ�
//��������ֱ�Ӵ�ӡ�����
#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	for (num; num <= 100; num++)
	{
		int a = num % 7;  //7�ı���
		int b = num / 10; //��ȡʮλ��
		int c = num % 10 ;//��ȡ��λ��
		if (a==0||b==7||c==7) 
		{
			cout << "������" << endl;
		}
		else 
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}