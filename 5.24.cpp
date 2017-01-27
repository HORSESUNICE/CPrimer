//输入两个整数，输出第一个除以第二个的结果
//修改使第二个数为0抛出异常，不设定catch看运行除以0的结果

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (0 == b)
		throw runtime_error("除数不能为0！");
	else
		cout << a << " / " << b << " = " << a / b << endl;
	return 0;
}