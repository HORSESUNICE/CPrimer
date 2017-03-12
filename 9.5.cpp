//重写上一题，返回迭代器指向找到的元素，必须处理未找到给定值
#include <iostream>
#include <vector>

using namespace std;

vector<int>::iterator findiniterator(vector<int>::iterator begin, vector<int>::iterator end, int i)
{
	while (begin != end)
	{
		if (*begin == i)
		{
			return begin;
		}
		++begin;
	}
	return end;
}

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7 };
	cout << "3 in v ? " << findiniterator(v.begin(), v.end(), 3) - v.begin() << endl;
	cout << "9 in v ? " << findiniterator(v.begin(), v.end(), 9) - v.begin() << endl;
}