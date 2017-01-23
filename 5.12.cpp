//统计有ff、fl、fi的字符序列个数

#include <iostream>

using namespace std;

int main()
{
	char ch1, ch2;
	int ff, fl, fi;
	ff = fl = fi = 0;
	//while (cin >> ch)		>>不能正确读取，直接忽略空白(空格、制表、换行)
	while (cin.get(ch1))
	{
		if (ch1 == 'f')
		{
			cin.get(ch2);
			switch (ch2)
			{
			case 'f':
				++ff;
				break;
			case 'l':
				++fl;
				break;
			case 'i':
				++fi;
				break;
			default:
				break;
			}
		}
		else
			continue;
	}

	cout << "ff :" << ff << endl;
	cout << "fl :" << fl << endl;
	cout << "fi :" << fi << endl;
	return 0;
}