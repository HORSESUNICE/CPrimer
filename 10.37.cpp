//包含10元素的vector<int>将3-7号元素逆序拷贝到list

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vi{ 0,1,2,3,4,5,6,7,8,9 };
	list<int> li;
	//这里要end-3 要指向拷贝段的后一个元素
	copy(vi.rbegin() + 2, vi.rend() - 3, back_inserter(li));

	for (auto i : li)
		cout << i << endl;
}