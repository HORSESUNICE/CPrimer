//编写并验证自己的reset()函数，使其作用于引用类型参数

#include <iostream>
using namespace std;

void reset(int &i)
{
	i = 7;
	return;
}

int main()
{
	int i = 6;
	cout << "old i = " << i << endl;
	reset(i);
	cout << "new i = " << i << endl;
	return 0;
}