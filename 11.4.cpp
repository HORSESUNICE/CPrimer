//拓展程序,忽略大小写和标点，再次统计单词

#include <iostream>
#include <string>
#include <map>
#include <fstream>

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
	ifstream ifs("C:/Users/mayangbin/win10/iostream/words.txt");
	map<string, int> words;
	string s;
	while (ifs >> s)
	{
		++words[changeWord(s)];
	}

	for (auto w : words)
		cout << w.first << " " << w.second << endl;

	//for (auto it = words.begin(); it != words.end(); ++it)
	//	cout << it->first << " " << it->second << endl;
}