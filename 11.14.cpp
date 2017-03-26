//拓展11.7，添加一个pair的vector，保存名和生日

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <utility>

using namespace std;

int main()
{
	typedef pair<string, string> namebir;
	map<string, vector<namebir>> family;
	ifstream ifs("C:/Users/mayangbin/win10/iostream/familybir.txt");

	string fn, ln, bir;
	while (ifs >> fn >> ln>>bir)
	{
		family[fn].push_back({ ln,bir });
	}

	for (auto f : family)
	{
		cout << f.first << ":" << endl;
		for (auto l : f.second)
			cout << l.first << " " << l.second << " ";
		cout << endl;
	}
}