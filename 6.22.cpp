//编写函数交换两个int指针

#include <iostream>
using namespace std;

void swapintp(int* &a, int* &b)
{
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int i = 0, j = 0;
	int *p1 = &i, *p2 = &j;
	cout << p1 << " " << p2 << endl;
	swapintp(p1, p2);
	cout << p1 << " " << p2 << endl;

	return 0;
}