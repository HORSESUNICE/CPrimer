//重写统计长度>=6的单词数量的函数，用函数代替lambda

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool sz6(const string &s)
{
	if (s.size() >= 6)
		return true;
	else
		return false;
}

int main()
{
	vector<string> vs{ "aaaaa","asdfsfsdfs","fsdfsadf","aaas","dfasdfdsf" };
	cout << count_if(vs.begin(), vs.end(), sz6) << endl;
}