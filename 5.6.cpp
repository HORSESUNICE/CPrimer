//使用条件运算符实现把数字成绩转换成字母

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
			(n % 10) > 7 ? s += '+' :
										(n % 10) < 3 ? s += '-' : s; 
		}
		cout << s << endl;
	}
	return 0;
}