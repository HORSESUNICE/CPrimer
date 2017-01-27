//编写自己的阶乘函数

#include <iostream>
using namespace std;

int fact(int i)
{
	int res = 1;
	for (int j = 2; j != i+1; ++j)
		res *= j;
	return res;
}

int main()
{


	cout << "5! = " << fact(5) << endl;
	return 0;
}