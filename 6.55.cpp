//��д�ĸ�����������int�������㣬����int�����������ͺ���ָ���vector������Щ����ָ��

#include <iostream>
#include <vector>

using namespace std;

typedef int(*fp)(int, int);

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

int main()
{
	vector<fp> v{ func1,func2,func3,func4 };
	return 0;
}