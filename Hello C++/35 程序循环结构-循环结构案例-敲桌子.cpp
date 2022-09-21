//案例描述：
//从1开始数到数字100， 
//如果数字个位含有7，
//或者数字十位含有7，
//或者该数字是7的倍数，
//我们打印敲桌子，
//其余数字直接打印输出。
#include<iostream>
using namespace std;
int main()
{
	int num = 1;
	for (num; num <= 100; num++)
	{
		int a = num % 7;  //7的倍数
		int b = num / 10; //获取十位数
		int c = num % 10 ;//获取个位数
		if (a==0||b==7||c==7) 
		{
			cout << "敲桌子" << endl;
		}
		else 
		{
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}