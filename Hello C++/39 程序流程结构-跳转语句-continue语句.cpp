#include<iostream>
using namespace std;
//���ã���ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
// ��break��ͬ��continueֻ��������ѭ����ʣ����䣬����������ǰѭ��
//����1-100ֻ���ż��
int main()
{
	for (int num = 1; num < 101; num++)
	{
		if(num%2==1)
		{
			continue;
		}
		cout << num << endl;
	}
	system("pause");
	return 0;
}