#include <iostream>
using namespace std;
//布尔数据类型
// 作用：代表真假的值
// 布尔数据类型只有两个
// true 本质是1
// false 本质是0
// 布尔类型占一个字节大小
//“真”用除0以外的数字来表示， “假”用数字“0”来表示。
int main()
{
	//创建一个bool
	bool flag = true;
	cout << flag << endl;
	cout << "size of bool = " << sizeof(bool) << endl;
	flag = false;
	cout << flag << endl;
	cout << "size of bool = " << sizeof(bool) << endl;
	system("pause");
	return 0;
}