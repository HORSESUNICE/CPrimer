//��д���򣬶���string int���У���ÿ�����д���һ��pairk,pair����һ��vector

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