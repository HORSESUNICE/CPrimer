//����һ��������main()�е���fact()

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
				throw range_error("�������������");
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