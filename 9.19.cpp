//重写9.18用list替换deque,程序要做出哪些改变

#include <iostream>
#include <string>
#include <list>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream is(line);

	list<string> d;
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