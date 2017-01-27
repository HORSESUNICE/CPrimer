//用指针形参交换两个整数

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 1, b = 2;
	swap(&a, &b);
	cout << "new a: " << a << endl;
	cout << "new b: " << b << endl;
	return 0;
}