//”√check_size∫Õbind÷ÿ–¥10.18
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

vector<string> &elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());

	auto ret = unique(vs.begin(), vs.end());

	vs.erase(ret, vs.end());
	return vs;
}

bool check_size(const string &s, string::size_type sz)
{
	return s.size() <= sz;
}

void biggies(vector<string> &vs, string::size_type sz)
{
	elimDups(vs);
	stable_sort(vs.begin(), vs.end(), [](const string &s1, const string &s2) {return s1.size() < s2.size(); });
	auto it = partition(vs.begin(), vs.end(), bind(check_size, _1, sz));

	cout << vs.end() - it << endl;

	for_each(it, vs.end(), [](const string &s) {cout << s << endl; });
}


int main()
{
	vector<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	biggies(vs, 5);
}