//给定string,使用bind和check_size在一个vector<int>查找第一个大于string长度的值

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const int &i, int sz)
{
	return i >= sz;
}

int main()
{
	vector<int> vs{ 1,2,3,4,5,6,7,8,9 };
	string s("hello");
	auto it = find_if(vs.begin(), vs.end(), bind(check_size, _1, s.size()));

	cout << *it << endl;
}