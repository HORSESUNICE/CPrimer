//读取一段单词直到连续出现两次并将这个单词输出，或说明无重复单词

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, pres;
	bool b = false;
	while (cin >> s)
	{
		if (s == pres)
		{
			b = true;
			cout << s << " twice!" << endl;
			break;
		}
		else
			pres = s;
	}
	if (b == false)
		cout << "no repeat!" << endl;
	return 0;
}