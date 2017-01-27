//编写f的四个版本，输出一条区分消息，验证之前练习的答案

#include <iostream>
using namespace std;

void f()
{
	cout << "无参数" << endl;
}

void f(int)
{
	cout << "一个int" << endl;
}

void f(int,int)
{
	cout << "两个int" << endl;
}

void f(double,double)
{
	cout << "两个double" << endl;
}


int main()
{
	//二义性
	//f(2.56, 42);
	f(42);
	f(2.56, 3.14);
	f(42, 0);
	return 0;
}