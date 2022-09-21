#include<iostream>
using namespace std;
int main()
{
	int weight[5]={};
	cout << "请输入第一只小猪的体重" << endl;
	cin >> weight[0];
	cout << "请输入第二只小猪的体重" << endl;
	cin >> weight[1];
	cout << "请输入第三只小猪的体重" << endl;
	cin >> weight[2];
	cout << "请输入第四只小猪的体重" << endl;
	cin >> weight[3];
	cout << "请输入第五只小猪的体重" << endl;
	cin >> weight[4];
	int max = 0;
	int num = 0;
	for (int i=0; i<5; i++)
	{
		if (max < weight[i])
		{
			max = weight[i];
		}
	}
	for (int j = 0; j < 5; j++)
	{
		if (max == weight[j])
		{
			num = j + 1;
		}
	}
	cout << "最重的小猪体重为" << max << endl;
	cout << "最重的小猪为第" << num << "只" << endl;
	system("pause");
	return 0;
}