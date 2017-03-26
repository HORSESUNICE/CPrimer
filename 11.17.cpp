//测试set的const属性与插入迭代器的使用能否成功

#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	set<int> si;
	copy(vi.begin(), vi.end(), inserter(si,si.end()));

	for (auto i : si)
		cout << i << endl;
}