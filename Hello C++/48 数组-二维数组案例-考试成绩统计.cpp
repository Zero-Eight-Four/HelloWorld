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
				cout << "请输入第" << i+1 << "位同学的语文成绩:";
				cin >> scores[i][j];
			}
			else if(j==1)
			{
				cout << "请输入第" << i + 1 << "位同学的数学成绩:";
				cin >> scores[i][j];
			}
			else
			{
				cout << "请输入第" << i + 1 << "位同学的英语成绩:";
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
		cout << "第" << i + 1 << "位同学的总成绩为 " << sum << endl;
	}
	system("pause");
	return 0;
}