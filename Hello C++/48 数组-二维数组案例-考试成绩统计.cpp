#include<iostream>
#include<string>
using namespace std;
int main()
{
	int scores[3][3]={};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				cout << "�������" << i+1 << "λͬѧ�����ĳɼ�:";
				cin >> scores[i][j];
			}
			else if(j==1)
			{
				cout << "�������" << i + 1 << "λͬѧ����ѧ�ɼ�:";
				cin >> scores[i][j];
			}
			else
			{
				cout << "�������" << i + 1 << "λͬѧ��Ӣ��ɼ�:";
				cin >> scores[i][j];

			}
		}
	}
    for(int i=0;i<3;i++)
	{
		int sum=0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
		}
		cout << "��" << i + 1 << "λͬѧ���ܳɼ�Ϊ " << sum << endl;
	}
	system("pause");
	return 0;
}