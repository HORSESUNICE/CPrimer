//��д�������Ȳ���string"ab2c3d7R4E6"�е�ÿ�������ַ���Ȼ���������ÿ����ĸ�ַ���
//��д�����汾���򣬵�һ��ʹ��find_first_of,�ڶ���ʹ��find_first_not_of

#include <iostream>
#include <string>

using namespace std;

void findNumChar(const string& s)
{
	string::size_type pos = 0;
	string num("0123456789");
	//find_first_of(num,pos)Ҫ����pos������ѭ��
	while ((pos = s.find_first_of(num,pos)) != string::npos)
	{
		cout << s[pos] << endl;
		++pos;
	}

	cout << "---------------" << endl;

	pos = 0;
	while ((pos = s.find_first_not_of(num, pos)) != string::npos)
	{
		cout << s[pos] << endl;
		++pos;
	}
}

int main()
{
	string s("ab2c3d7R4E6");
	findNumChar(s);
}