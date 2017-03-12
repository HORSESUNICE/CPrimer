//编写程序，首先查找string"ab2c3d7R4E6"中的每个数字字符，然后查找其中每个字母字符。
//编写两个版本程序，第一个使用find_first_of,第二个使用find_first_not_of

#include <iostream>
#include <string>

using namespace std;

void findNumChar(const string& s)
{
	string::size_type pos = 0;
	string num("0123456789");
	//find_first_of(num,pos)要加上pos否则死循环
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