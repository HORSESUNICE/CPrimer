//��д�����Ƚ�int��intָ����ָ��ֵ

#include <iostream>
using namespace std;

int bigger(int n, const int *p)
{
	if (n < *p)
		return *p;
	else
		return n;
}

int main()
{
	int i = 3;
	int *p = &i;
	cout << bigger(5, p) << endl;
	return 0;
}