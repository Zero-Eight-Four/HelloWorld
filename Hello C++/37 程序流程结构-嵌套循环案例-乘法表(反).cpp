#include<iostream>
using namespace std;
int main()
{
	for (int row = 9; row > 0; row--)
	{
		for (int line = 9; line >= row; line--)
		{
			cout << row << "*" << line << "=" << row * line<<"\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}