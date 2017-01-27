//修改arrptr，返回数组的引用

#include <iostream>

using namespace std;

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };



decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}

int main()
{
	int(&re)[5] = arrPtr(1);
	for (int i = 0; i != 5; ++i)
		cout << re[i] << " ";
	cout << endl;

	return 0;
}