//��д������һ�ε��÷���0��֮��ÿ�μ�һ

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