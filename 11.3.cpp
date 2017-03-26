//编写自己的单词计数程序

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("C:/Users/mayangbin/win10/iostream/hello.txt");
	//map<string, int> words;
	unordered_map<string, int> words;
	string s;
	while (ifs >> s)
	{
		++words[s];
	}

	for (auto w : words)
		cout << w.first << " " << w.second << endl;
}