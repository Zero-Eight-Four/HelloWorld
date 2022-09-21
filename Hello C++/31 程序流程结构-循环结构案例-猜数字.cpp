//案例描述：系统随机生成一个1到100之间的数字，玩家进行猜测。
//如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int randnum = rand() % 100 + 1;//生成一个0~100的数字
    int num;
    int times = 0;
    cout << "猜猜" << endl;
    cin >> num;
    for (num;num != randnum;cin >>num)
    {
        if (cin.fail())
        {
            cout << "严肃点，别乱输" << endl;
            cin.clear();
            cin.ignore(2048, '\n');
        }
        else if (num >= 0 && num <= 100 && num > randnum)
        {
            cout << "大了" << endl;
        }
        else if (num >= 0 && num <= 100 && num < randnum)
        {
            cout << "小了" << endl;
        }
        else if (num <= 0 or num >= 100)
        {
            cout << "严肃点，别乱输" << endl;
        }
        ++times;
    }
    if (num = randnum)
    {
        cout << "对了" << endl;
        cout << "您猜了" << times << "次" << endl;
    }
    system("pause");
    return 0;
}

    