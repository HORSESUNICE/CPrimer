//��д9.15,�Ƚ�list<int>��vector<int>Ԫ��

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
		//listû��[]������
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