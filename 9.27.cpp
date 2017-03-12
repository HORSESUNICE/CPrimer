//编写程序，查找并删除forward_list<int>中的奇数元素

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> fi{ 1,2,3,4,5,6,7,8,9,10 };
	auto prev = fi.before_begin();
	auto curr = fi.begin();

	while (curr != fi.end())
	{
		if (*curr & 1)
			//prev保持不变
			//删除后要更新curr
			//fi.erase_after(prev);
			curr = fi.erase_after(prev);
		else
		{
			//用++移动prev也是可以的
			//++prev;
			prev = curr;
			++curr;
		}
	}

	curr = fi.begin();

	while (curr != fi.end())
	{
		cout << *curr << endl;
		++curr;
	}
}