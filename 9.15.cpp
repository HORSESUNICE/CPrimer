//��д�����ж�����vector<int>�Ƿ����

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

	//vector������ṩ==�����
	cout << (va == vb) << endl;
	cout << (va == vc) << endl;
}