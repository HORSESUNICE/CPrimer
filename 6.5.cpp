//编写函数输出实参绝对值

#include <iostream>
using namespace std;

int abs(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}

int main()
{
	int i;
	while (cin >> i)
		cout << abs(i) << endl;
	return 0;
}