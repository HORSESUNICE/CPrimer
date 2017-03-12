//��д���򣬴�һ��vector<char>��ʼ��string

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

	//vector��data��Ա���������ڴ��׵�ַ
	string sc(vc.data(), vc.size());
	cout << sc << endl;
}