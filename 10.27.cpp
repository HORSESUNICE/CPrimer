//使用unique_copy将一个vector中不重复元素拷贝到初始为空的list中

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vi{ 1,1,3,5,7,3,8,7,5,9,4 };
	list<int> li;

	sort(vi.begin(),vi.end());

	//第三个参数不能是li.begin()
	//算法是不改变容器大小的
	//unique_copy要求重复参数相邻存放
	unique_copy(vi.begin(), vi.end(), back_inserter(li));

	for (auto i : li)
		cout << i << endl;

}