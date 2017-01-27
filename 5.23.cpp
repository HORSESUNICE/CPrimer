//输入两个整数，输出第一个除以第二个的结果

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (0 == b)
		cout << "除数不能为0！" << endl;
	else
		cout << a << " / " << b << " = " << a / b << endl;
	return 0;
}