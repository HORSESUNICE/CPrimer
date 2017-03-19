//使用list代替vector实现10.9

#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

list<string> &elimDups(list<string> &vs)
{
	cout << "cin------------------" << endl;
	for (auto s : vs)
		cout << s << endl;

	vs.sort();
	cout << "sort------------------" << endl;
	for (auto s : vs)
		cout << s << endl;

	vs.unique();
	cout << "unique------------------" << endl;
	for (auto s : vs)
		cout << s << endl;

	return vs;
}

int main()
{
	list<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	elimDups(vs);
}