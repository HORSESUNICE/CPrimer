//本节最后一个例子，如果不将insert结果赋给begin，将发生什么，编写程序验证

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	auto begin = vi.begin();
	while (begin != vi.end())
	{
		++begin;
		//iterator!=pointer是会失效导致程序崩溃的
		vi.insert(begin, 42);
		++begin;
	}

	begin = vi.begin();
	while (begin != vi.end())
	{
		cout << *begin << endl;
		++begin;
	}
}