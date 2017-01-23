//使用if else实现把数字成绩转换成字母

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> grade = { "F","D","C","B","A","A++" };
	int n;
	string s;
	while (cin >> n)
	{
		if (n > 100 || n < 0)
		{
			cout << "num ERROR" << endl;
			continue;
		}
		if (n < 60)
			s = grade[0];
		else if (n == 100)
			s = grade[5];
		else
		{
			s = grade[(n - 50) / 10];
			if (n % 10 > 7)
				s += '+';
			else if (n % 10 < 3)
				s += '-';
		}
		cout << s << endl;
	}
	return 0;
}