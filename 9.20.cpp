//编写程序，从list<int>拷贝到两个deque中，值为偶数的所有元素一个deque,奇数的一个

#include <iostream>
#include <string>
#include <list>
#include <deque>
#include <sstream>

using namespace std;

int main()
{
	list<int> ls{ 1,2,3,4,5,6,7,8,9,10 };

	deque<int> d1, d2;

	auto it = ls.begin();
	while (it != ls.end())
	{
		if (*it%2==1)
		{
			d1.push_back(*it);
		}
		else
		{
			d2.push_back(*it);
		}
		++it;
	}

	auto itd1 = d1.begin();
	while (itd1 != d1.end())
	{
		cout << *itd1 << endl;
		++itd1;
	}

	cout << "-----------------" << endl;

	auto itd2 = d2.begin();
	while (itd2 != d2.end())
	{
		cout << *itd2 << endl;
		++itd2;
	}
}