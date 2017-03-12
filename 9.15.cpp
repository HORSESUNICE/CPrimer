//编写程序判断两个vector<int>是否相等

#include <iostream>
#include <vector>

using namespace std;

bool equal(const vector<int> &va, const vector<int> &vb)
{
	//vector<int>::size_type i;
	if (va.size() != vb.size())
		return false;
	else
	{
		auto i = va.size();
		for (i = 0; i != va.size(); ++i)
			if (va[i] != vb[i])
				return false;
		return true;
	}
	
	
}

int main()
{
	vector<int> va{ 1,3,5 };
	vector<int> vb{ 2,4,6 };
	vector<int> vc{ 1,3,5 };
	//cout << equal(va, vb) << endl;
	//cout << equal(va, vc) << endl;

	//vector本身就提供==运算符
	cout << (va == vb) << endl;
	cout << (va == vc) << endl;
}