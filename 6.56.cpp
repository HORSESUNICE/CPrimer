//调用6.55的vector对象输出结果

#include <iostream>
#include <vector>

using namespace std;

typedef int (*fp)(int, int);

int func1(int a, int b)
{
	return a + b;
}

int func2(int a, int b)
{
	return a - b;
}

int func3(int a, int b)
{
	return a * b;
}

int func4(int a, int b)
{
	return a / b;
}

void compute(int a, int b, fp p)
{
	cout << p(a, b) << endl;
}

int main()
{
	vector<fp> v{ func1,func2,func3,func4 };
	int a = 4, b = 2;
	for (auto i : v)
		compute(a, b, i);
	return 0;
}