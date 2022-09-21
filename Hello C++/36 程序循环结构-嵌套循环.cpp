#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "*"<<" ";
			for (int m = 0; m < 1; m++)
			{
				cout << "=" << " ";
			}
		}
		cout << endl;
	}
	system("pause");
	return 0;
}