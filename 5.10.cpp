//统计大小写元音字母

#include <iostream>

using namespace std;

int main()
{
	char ch;
	int cnt[5]{ 0 };
	while (cin >> ch)
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
		}
	}
	char a = 'A';
	for (int i = 0; i < 5; i++)
		cout << static_cast<char>(a + i) << " :" << cnt[i] << endl;
	return 0;
}