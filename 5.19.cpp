//利用do while重复：提示输入两个string,挑出短的然后输出

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2, judge;
	do
	{
		cout << "plz cin 2 string: ";
		cin >> s1 >> s2;
		if (s1.size() <= s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
		cout << "continue: y or n ? ";
		cin >> judge;
	} while (judge == "y");

	return 0;
}