//使用find查找list<int>中最后一个0

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> li{ 1,2,3,5,2,1,0,0,0,1 };
	auto it = find(li.rbegin(), li.rend(), 0);
	cout << *it.base() << endl;
}