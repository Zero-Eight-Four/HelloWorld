//���ã�������ʾһЩ������ʾ������ASCII�ַ�
// �ֽ׶γ��õ�ת���ַ��� \n \\ \t
/*
ת���ַ� ����	                             ASCII��ֵ��ʮ���ƣ�
\a	     ����	                             007
\b	     �˸�(BS) ������ǰλ���Ƶ�ǰһ��	 008
\f	     ��ҳ(FF)������ǰλ���Ƶ���ҳ��ͷ	 012
\n	     ����(LF) ������ǰλ���Ƶ���һ�п�ͷ 010
\r	     �س�(CR) ������ǰλ���Ƶ����п�ͷ	 013
\t	     ˮƽ�Ʊ�(HT) ��������һ��TABλ�ã�	 009
\v	     ��ֱ�Ʊ�(VT)	                     011
\\	     ����һ����б���ַ�""	             092
��	     ����һ�������ţ�Ʋ�ţ��ַ�	         039
"	     ����һ��˫�����ַ�	                 034
?        ����һ���ʺ�	                     063
\0	     ����0	                             000
\ddd	 8����ת���ַ���d��Χ0~7	        3λ8����
\xhh	 16����ת���ַ���h��Χ09��af��A~F	3λ16����
*/
#include<iostream>
using namespace std;
int main()
{
	cout << "Hello World\n" << endl;
	cout << "\\" << endl;
	cout << "a\tHello World" << endl;
	cout << "aa\tHello World" << endl;
	cout << "aaa\tHello World" << endl;
	cout << "aaaa\tHello World" << endl;
	system("pause");
	return 0;
}