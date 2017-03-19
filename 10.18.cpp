//ÖØÐ´10.16ÓÃpartition´úÌæfind_if

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> &elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());

	auto ret = unique(vs.begin(), vs.end());

	vs.erase(ret, vs.end());
	return vs;
}


void biggies(vector<string> &vs, string::size_type sz)
{
	elimDups(vs);
	stable_sort(vs.begin(), vs.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });
	auto it = partition(vs.begin(), vs.end(), [sz](const string &s) {return s.size() < sz; });

	cout << vs.end() - it << endl;

	for_each(it, vs.end(), [](const string &s) {cout << s << endl; });
}


int main()
{
	vector<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(vs, 5);
}