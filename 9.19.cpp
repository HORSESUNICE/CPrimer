//��д9.18��list�滻deque,����Ҫ������Щ�ı�

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