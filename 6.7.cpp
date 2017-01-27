//编写函数第一次调用返回0，之后每次加一

#include <iostream>
using namespace std;

int cnt()
{
	static int cnt = -1;
	++cnt;
	return cnt;
}

int main()
{
	for (int i = 0; i != 10; ++i)
		cout << cnt() << endl;
	return 0;
}