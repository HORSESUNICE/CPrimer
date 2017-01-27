//改写6.33，使其有条件地输出与执行过程有关的信息，例如调用时输出vector对象大小，分别在打开和关闭调试器情况下编译执行这个程序

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printv(vector<string> &v, int index)
{
	auto sz = v.size();
	if (!v.empty() && index != sz)
	{
		//define NDEBUG 关闭调试
		#ifndef NDEBUG
		cout << "vector.size() = " << sz << endl;
		#endif  

		cout << v[index++] << endl;
		printv(v, index);
	}
}

int main()
{
	vector<string> v{ "aaa","bbb","ccc" };
	printv(v, 0);
	return 0;
}