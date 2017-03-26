//编写程序，读入string int序列，将每队序列存入一个pairk,pair存在一个vector

#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <fstream>

using namespace std;

int main()
{
	typedef pair<string, int> pa;
	pa p;
	vector<pa> vp;

	ifstream ifs("C:/Users/mayangbin/win10/iostream/pair.txt");
	string s;
	int i;
	while (ifs >> s >> i)
	{
		vp.push_back(pa(s, i));
	}

	for (auto &p : vp)
		cout << p.first << " " << p.second << endl;
}