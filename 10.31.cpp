//修改10.30，使用unique_copy,只打印不重复元素

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi, vic;
	istream_iterator<int> isit(cin), eof;

	while (isit != eof)
	{
		vi.push_back(*isit);
		++isit;
	}

	for (auto i : vi)
		cout << i << endl;

	cout << "-------------------------------" << endl;

	sort(vi.begin(), vi.end());
	unique_copy(vi.begin(), vi.end(), back_inserter(vic));

	for (auto i : vic)
		cout << i << endl;
}