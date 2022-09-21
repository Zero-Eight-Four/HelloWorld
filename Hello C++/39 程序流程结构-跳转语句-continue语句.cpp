#include<iostream>
using namespace std;
//作用：在循环语句中，跳过本次循环中余下尚未执行的语句，继续执行下一次循环
// 与break不同，continue只跳过本次循环的剩余语句，并不结束当前循环
//例，1-100只输出偶数
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