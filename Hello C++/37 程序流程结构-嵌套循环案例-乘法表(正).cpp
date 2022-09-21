#include<iostream>
using namespace std;
int main()
{
	for (int row = 1; row < 10; row++)
	{
		for (int line = 1; line <= row; line++)
		{
			cout << line <<"*"<<row <<"="<<line*row<<"\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}