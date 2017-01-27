//输入两个整数，输出第一个除以第二个的结果
//修改使第二个数为0抛出异常，用try捕获异常，catch输出是否输入新数据重新执行

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		try
		{
			if (0 == b)
				throw runtime_error("除数不能为0！");
			else
				cout << a << " / " << b << " = " << a / b << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "continue? y or n ";
			char c;
			cin >> c;
			if (c == 'n')
				break;
		}
	}
	return 0;
}