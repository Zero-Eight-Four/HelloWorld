//����������ϵͳ�������һ��1��100֮������֣���ҽ��в²⡣
//����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    int randnum = rand() % 100 + 1;//����һ��0~100������
    int num;
    int times = 0;
    cout << "�²�" << endl;
    cin >> num;
    for (num;num != randnum;cin >>num)
    {
        if (cin.fail())
        {
            cout << "����㣬������" << endl;
            cin.clear();
            cin.ignore(2048, '\n');
        }
        else if (num >= 0 && num <= 100 && num > randnum)
        {
            cout << "����" << endl;
        }
        else if (num >= 0 && num <= 100 && num < randnum)
        {
            cout << "С��" << endl;
        }
        else if (num <= 0 or num >= 100)
        {
            cout << "����㣬������" << endl;
        }
        ++times;
    }
    if (num = randnum)
    {
        cout << "����" << endl;
        cout << "������" << times << "��" << endl;
    }
    system("pause");
    return 0;
}

    