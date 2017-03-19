//编写lambda，接受两个int,返回他们的和

#include <iostream>

using namespace std;
//lambda前面要加auto 函数名,最后要有分号
auto f = [](int a, int b)->int {return a + b; };

auto f2()->int { return 4; }

int main()
{
	//lambda是不能像一般函数一样输出地址的
	//cout << f << endl;
	cout << f(1, 2) << endl;
	//返回的是f2的地址
	cout << f2 << endl;
	cout << f2() << endl;
}