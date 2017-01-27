//编写之前练习的分离式编译

#include <iostream>
#include "Chapter6.h"

using namespace std;

int main()
{
	for (int i = -2; i != 3; ++i)
		cout << abs(i) << endl;
	cout << "5! = " << fact(5) << endl;
	return 0;
}