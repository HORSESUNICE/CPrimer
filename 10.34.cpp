//使用反向迭代器打印一个vector

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	for (auto it = vi.crbegin(); it != vi.crend(); ++it)
		cout << *it << " ";
}