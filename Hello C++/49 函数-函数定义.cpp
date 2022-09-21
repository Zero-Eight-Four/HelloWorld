//作用：将一段经常使用的代码封装起来，减少重复代码
//一个较大的程序，一般分为若干个程序块，每个模块实现特定的功能。

//函数的定义一般主要有5个步骤：
//1、返回值类型
//2、函数名
//3、参数表列
//4、函数体语句
//5、return 表达式
/*
语法:

返回值类型 函数名 （参数列表）
{
       函数体语句
       return表达式
}

*/

//实现一个加法函数，输入两个整型，计算相加结果，并且返回
#include<iostream>
using namespace std;
  
int add(int num1, int num2)
    {
        int sum = num1 + num2;
        return sum;
    }
int main()
{
    system("pause");
    return 0;
}  