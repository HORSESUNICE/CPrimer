//一个vector保存1-9，拷贝到三个其他容器分别使用三种不同插入迭代器，验证比较区别

#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	vector<int> vicopy;
	auto it = vi.begin();
	while (it != vi.end())
	{
		auto itv = back_inserter(vicopy);
		*itv = *it;
		++it;
	}
	for (auto i : vicopy)
		cout << i << endl;
	cout << "------------------" << endl;

	list<int> licopy;
	it = vi.begin();
	while (it != vi.end())
	{
		auto itl = front_inserter(licopy);
		*itl = *it;
		++it;
	}
	for (auto i : licopy)
		cout << i << endl;
	cout << "------------------" << endl;

	list<int> licopy1;
	it = vi.begin();
	while (it != vi.end())
	{
		auto itl = inserter(licopy1,licopy1.begin());
		*itl = *it;
		++it;
	}
	for (auto i : licopy1)
		cout << i << endl;
	cout << "------------------" << endl;

	list<int> licopy2;
	it = vi.begin();
	while (it != vi.end())
	{
		auto itl = inserter(licopy2, licopy2.end());
		*itl = *it;
		++it;
	}
	for (auto i : licopy2)
		cout << i << endl;
}