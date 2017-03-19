//使用普通迭代器逆序打印一个vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	for (string::size_type i = vi.size() - 1; i != -1; --i)
		cout << vi[i] << " ";
}
