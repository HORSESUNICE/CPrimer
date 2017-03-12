//编写函数，接受一对指向vector<int>的迭代器和一个int，在迭代器范围查找给定值，返回布尔值指出是否找到

#include <iostream>
#include <vector>

using namespace std;

bool findiniterator(vector<int>::iterator begin, vector<int>::iterator end, int i)
{
	while (begin != end)
	{
		if (*begin == i)
		{
			return true;
		}
		++begin;
	}
	return false;
}

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7 };
	cout << "3 in v ? " << findiniterator(v.begin(), v.end(), 3) << endl;
	cout << "9 in v ? " << findiniterator(v.begin(), v.end(), 9) << endl;
}