//利用initializer_list<int>类型参数计算列表中所有元素的和

#include <iostream>
#include <initializer_list>
using namespace std;

int sum(initializer_list<int> il)
{
	int sum = 0;
	for (auto i : il)
		sum += i;
	return sum;
}

int main()
{
	cout << sum({ 1,2,3,4,5 }) << endl;
	return 0;
}