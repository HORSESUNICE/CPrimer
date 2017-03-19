//使用流迭代器、sort、copy从标准输入读取一个整数数列，排序，将结果写到标准输出

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

	copy(vi.begin(), vi.end(), back_inserter(vic));
	sort(vic.begin(), vic.end());

	for (auto i : vic)
		cout << i << endl;
}