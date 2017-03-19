//编写程序用fill_n将一个序列中的int设置为0

#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5 };
	fill_n(vi.begin(), vi.size(), 0);

	for (auto i : vi)
		cout << i << endl;
}