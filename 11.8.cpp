//编写程序，在vector而不是set中保存不重复的单词

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
	//vector<string> vs;
	//string s;
	//while (cin >> s)
	//{
	//	if (find(vs.begin(), vs.end(), s) == vs.end())
	//		vs.push_back(s);
	//}
	//for (auto s : vs)
	//	cout << s << endl;

	set<string> words;
	string s;
	while (cin >> s)
	{
		//set用insert成员函数
		words.insert(s);
	}
	for (auto s : words)
		cout << s << endl;
}