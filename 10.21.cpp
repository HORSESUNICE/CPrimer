//编写一个lambda,捕获一个int，并将int递减为0，为0后再调用lambda不再递减
//lambda返回一个bool,指出捕获是否为0

#include <iostream>
using namespace std;

int main()
{
	int i = 7;
	auto f = [i]()mutable->bool
	{
		if (i > 0)
		{
			cout << i << endl;
			--i;
			return false;
		}
		else
		{
			cout << 0 << endl;
			return true;
		}

	};

	for (int i = 0; i != 10; ++i)
		f();
}
