//使用下面代码定义的ia,将ia拷贝到一个vector和list,使用单迭代器版本erase从list删除奇数，从vector删除偶数
//int ia[]={0,1,1,2,3,5,8,13,21,55,89};

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

using namespace std;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vi(begin(ia), end(ia));
	list<int> li(begin(ia), end(ia));

	auto vit = vi.begin();
	while (vit != vi.end())
	{
		if (*vit & 1)
			++vit;
		else
			vit = vi.erase(vit);
	}
	vit = vi.begin();
	while (vit != vi.end())
	{
		cout << *vit << endl;
		++vit;
	}

	cout << "------------" << endl;

	auto lit = li.begin();
	while (lit != li.end())
	{
		if (*lit & 1)
			lit = li.erase(lit);
		else
			++lit;
	}
	lit = li.begin();
	while (lit != li.end())
	{
		cout << *lit << endl;
		++lit;
	}
}