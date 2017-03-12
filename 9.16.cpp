//重写9.15,比较list<int>和vector<int>元素

#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool equal(const vector<int> &va, const list<int> &vb)
{
	//vector<int>::size_type i;
	if (va.size() != vb.size())
		return false;
	else
	{
		//list没有[]操作符
		auto ita = va.begin();
		auto itb = vb.begin();
		while (ita != va.end())
		{
			if (*ita != *itb)
				return false;
			++ita;
			++itb;

		}
		return true;
	}


}

int main()
{
	vector<int> va{ 1,3,5 };
	list<int> vb{ 2,4,6 };
	list<int> vc{ 1,3,5 };
	cout << equal(va, vb) << endl;
	cout << equal(va, vc) << endl;
}