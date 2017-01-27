//编写函数说明形参，局部变量和局部静态变量的区别

#include <iostream>
using namespace std;

int add(int a, int b)
{
	static int cnt;
	++cnt;
	cout << "add : " << cnt << endl;
	return a + b;
}

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a << " + " << b << " = " << add(a, b) << endl;
	}
	return 0;
}