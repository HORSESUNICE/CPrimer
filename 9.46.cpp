//重写9.45,使用位置和长度管理string，只使用insert

#include <iostream>
#include <string>

using namespace std;

string &change(string &s, const string &b, const string &e)
{
	//直接对s进行的修改
	s.insert(0, b);
	s.insert(s.size(), e);
	return s;
}

int main()
{
	string word(" love ");
	string b("i");
	string e("c++");
	string s = change(word, b, e);
	cout << s << endl;
}