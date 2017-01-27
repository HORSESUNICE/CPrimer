//µİ¹éÊä³övector¶ÔÏó

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printv(vector<string> &v,int index)
{
	auto sz = v.size();
	if (!v.empty() && index != sz)
	{
		cout << v[index++] << endl;
		printv(v, index);
	}
}

int main()
{
	vector<string> v{ "aaa","bbb","ccc" };
	printv(v,0);
	return 0;
}