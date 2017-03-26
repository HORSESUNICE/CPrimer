//定义一个map，将单词和一个行号的list关联，list保存的是单词出现的行号

#include <iostream>
#include <map>
#include <list>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

string &changeWord(string &s)
{
	if (s[0] >= 'A'&&s[0] <= 'Z')
		s[0] = s[0] - 'A' + 'a';
	if (s[s.size() - 1] == ',' || s[s.size() - 1] == '.')
		s.erase(s.end() - 1);
	return s;
}

int main()
{
	map<string, list<int>> words;

	int line = 1;
	ifstream ifs("C:/Users/mayangbin/win10/iostream/words.txt");
	string s;
	string w;
	while (getline(ifs, s))
	{
		istringstream is(s);
		while (is >> w)
			words[changeWord(w)].push_back(line);
		++line;
	}

	for (auto wd : words)
	{
		cout << wd.first << ":" << endl;
		for (auto l : wd.second)
			cout << l << " ";
		cout << endl;
	}
}