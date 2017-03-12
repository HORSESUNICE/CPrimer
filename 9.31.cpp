//316页中删除偶数并且复制奇数的程序能否用于list或forward_list，为什么，修改程序使之能用于这些类型

#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	list<int> li{ 0,1,2,3,4,5,6,7,8,9 };
	auto iter = li.begin();
	while (iter != li.end())
	{
		if (*iter & 1)
		{
			iter = li.insert(iter, *iter);
			++iter;
			++iter;
		}
		else
			iter = li.erase(iter);

	}
	iter = li.begin();
	while (iter != li.end())
	{
		cout << *iter << endl;
		++iter;
	}

	cout << "-----------------------" << endl;

	forward_list<int> fi{ 0,1,2,3,4,5,6,7,8,9 };
	auto prev = fi.before_begin();
	auto curr = fi.begin();
	while (curr != fi.end())
	{
		if (*curr & 1)
		{
			prev = fi.insert_after(prev, *curr);
			prev = curr;
			++curr;
		}
		else
			curr = fi.erase_after(prev);

	}
	curr = fi.begin();
	while (curr != fi.end())
	{
		cout << *curr << endl;
		++curr;
	}
}