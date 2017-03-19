//编写一个lambda,捕获所在函数的int,并接受一个int,返回两个int的和

#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	auto f = [x](int i) {return x + i; };
	cout << f(7) << endl;
}