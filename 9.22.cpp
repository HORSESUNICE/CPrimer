//假定iv是一个int的vector,下面的程序存在什么错误，如何修改
//
//vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
//while (iter != mid)
//	if (*iter == some_val)
//		iv.insert(iter, 2 * some_val);

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> iv{ 1,1,1,1,1 };
	int some_val = 1;
	vector<int>::size_type add = 0, oddsize = iv.size();
	vector<int>::iterator iter = iv.begin(), mid = iv.begin() + oddsize / 2;
	while (iter != mid)
	{
		if (*iter == some_val)
			iter = iv.insert(iter, 2 * some_val);
		++add;
		++iter;
		++iter;
		mid = iv.begin() + oddsize / 2 + add;
	}
	
	iter = iv.begin();
	while (iter != iv.end())
	{
		cout << *iter << endl;
		++iter;
	}
}