//用if统计元音字母

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	char ch;
	int nCnt = 0;
	while (cin >> ch)
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			++nCnt;
	cout << "num of \"aeiou\" = " << nCnt << endl;
	return 0;
}