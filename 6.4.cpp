//输入一个数字在main()中调用fact()

#include <iostream>
#include <stdexcept>
using namespace std;

int fact(int i)
{
	int res = 1;
	for (int j = 1; j != i+1; ++j)
		res *= j;
	return res;
}

int main()
{
	int n = 0;
	while (cin >> n)
	{
		try
		{
			if (n > 16)
				throw range_error("输入的整数过大！");
			cout << n << "! = " << fact(n) << endl;
		}
		catch (range_error err)
		{
			cout << err.what() << endl;
			cout << "Please enter a num 0-16: ";
			continue;
		}
	}
	return 0;
}