//统计大小写元音字母和空白

#include <iostream>

using namespace std;

int main()
{
	char ch;
	int cnt[8]{ 0 };
	//while (cin >> ch)		>>不能正确读取，直接忽略空白(空格、制表、换行)
	while(cin.get(ch))
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			++cnt[0];
			break;
		case 'b':
		case 'B':
			++cnt[1];
			break;
		case 'c':
		case 'C':
			++cnt[2];
			break;
		case 'd':
		case 'D':
			++cnt[3];
			break;
		case 'e':
		case 'E':
			++cnt[4];
			break;
		case ' ':
			++cnt[5];
			break;
		case '\t':
			++cnt[6];
			break;
		case'\n':
			++cnt[7];
			break;
		}
	}
	char a = 'A';
	for (int i = 0; i < 5; i++)
		cout << static_cast<char>(a + i) << " :" << cnt[i] << endl;
	cout << "space :" << cnt[5] << endl;
	cout << "tab :" << cnt[6] << endl;
	cout << "return :" << cnt[7] << endl;
	return 0;
}