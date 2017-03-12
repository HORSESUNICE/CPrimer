//编写程序，从一个vector<char>初始化string

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string inis(const vector<char> &vc)
{
	string s;
	auto it = vc.begin();
	while (it != vc.end())
	{
		s.push_back(*it);
		++it;
	}
	return s;
}

int main()
{
	vector<char> vc{ 'a','b','c','d','e' };
	string s = inis(vc);
	cout << s << endl;

	//vector的data成员函数返回内存首地址
	string sc(vc.data(), vc.size());
	cout << sc << endl;
}