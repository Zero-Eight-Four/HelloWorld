#include <iostream>
using namespace std;
int main()
{
	// ǰ�õ���
	int a;
	cout << "������a��ֵ" << endl;
	cin >> a;
	++a; //��a+1
	cout << "a = " << a << endl;
	// ���õ���
	int b;
	cout << "������b��ֵ" << endl;
	cin >> b;
	b++; //��b+1
	cout << "b = " << b << endl;
	// ǰ�õ�������õ���������
	// ǰ�õ����ȶԱ�������++���ټ�����ʽ
	// ������һ��ǰ�õ���
	cout << "������һ��ǰ�õ���" << endl;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	cout << "a = " << a << "\n++a * b = " << ++a * b << endl;
	// ���õ����ȼ�����ʽ����Ա�������++
	// ������һ�����õ���
	cout << "������һ�����õ���" << endl;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	cout << "a = " << a << "\na++ * b = " << a++ * b << endl;
	system("pause");
	return 0;
	//�ݼ�ͬ��
}