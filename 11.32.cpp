//使用上一题的multimap编写程序，按字典序打印作者列表和他们作品

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	multimap<string, string> book{ { "myb","cal" },{ "myb","liner algebra" },{ "sht","sss" },{"jjj","b1"},{"jjj","b2"} };

	string name;
	int end = 0;
	for (auto it = book.begin(); it != book.end(); ++it)
	{
		if (it->first != name)
		{
			if (end)
				cout << endl;
			++end;
			name = it->first;
			cout << it->first << " : " << it->second;

		}
		else
			cout << " " << it->second;
	}
	cout << endl;
}
