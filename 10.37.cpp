//����10Ԫ�ص�vector<int>��3-7��Ԫ�����򿽱���list

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vi{ 0,1,2,3,4,5,6,7,8,9 };
	list<int> li;
	//����Ҫend-3 Ҫָ�򿽱��εĺ�һ��Ԫ��
	copy(vi.rbegin() + 2, vi.rend() - 3, back_inserter(li));

	for (auto i : li)
		cout << i << endl;
}