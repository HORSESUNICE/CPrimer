//”√multimap÷ÿ–¥11.7

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	multimap<string, string> family;
	ifstream ifs("C:/Users/mayangbin/win10/iostream/family.txt");

	string fn, ln;
	while (ifs >> fn >> ln)
	{
		family.insert({ fn,ln });
	}

	for (auto f : family)
	{
		cout << f.first << " " << f.second << endl;
	}
}