//����set��const����������������ʹ���ܷ�ɹ�

#include <iostream>
#include <iterator>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	set<int> si;
	copy(vi.begin(), vi.end(), inserter(si,si.end()));

	for (auto i : si)
		cout << i << endl;
}