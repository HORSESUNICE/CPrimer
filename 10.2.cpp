//��д10.1������ȡstring��list

#include <iostream>
#include <list>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	list<string> ls;
	string s;
	getline(cin, s);
	string num;
	cin >> num;

	string n;
	istringstream is(s);
	while (is >> n)
		ls.push_back(n);

	cout << num << " occurs " << count(ls.begin(), ls.end(), num) << " times!" << endl;
}