//编写程序，从标准输入读取string序列，存入deque。编写一个循环，用迭代器打印deque的元素

#include <iostream>
#include <string>
#include <deque>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream is(line);

	deque<string> d;
	string s;
	while (is >> s)
		d.push_back(s);

	auto it = d.begin();
	while (it != d.end())
	{
		cout << *it << endl;
		++it;
	}
}