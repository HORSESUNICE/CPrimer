//编写函数声明，返回数组的引用且该数组包含10个string对象，不要使用尾置返回类型、decltype、类型别名

#include <iostream>
#include <string>

using namespace std;

string s1[10] = { "a","b","c","d","e","f","g","h","i","j" };
string s2[10] = { "A","B","C","D","E","F","G","H","I","J" };

string(&arrre(int i))[10]
{
	return (i % 2) ? s1 : s2;
}

int main()
{
	string(&p)[10] = arrre(1);
	//必须初始化引用,下面的方式是不行的
	//string(&p)[10];
	//p = arrre(1);
	for (int i = 0; i != 10; ++i)
		cout << *(p + i) << " ";//用指针访问数组也是可以的
	cout << endl;
	return 0;
}