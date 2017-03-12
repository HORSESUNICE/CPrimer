//编写程序，将一个list中的char*指针元素赋值给vector中的string

#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

int main()
{
	list<char *> lc{ "aaa","bbb","ccc" };
	vector<string> vs1(lc.begin(), lc.end()), vs2;
	auto it = vs1.begin();
	while (it != vs1.end())
	{
		cout << *it << endl;
		++it;
	}

	cout << endl;

	vs2.assign(lc.begin(), lc.end());
	auto iti = vs2.begin();
	while (iti != vs2.end())
	{
		cout << *iti << endl;
		++iti;
	}

}