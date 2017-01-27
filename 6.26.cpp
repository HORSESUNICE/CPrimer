//编写main函数，接受本节选项，输出传递给main的实参内容

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	//argv是不能用范围for的，缺失迭代器

	//这个版本方法不是很好
	//for (decltype (sizeof(argv))i=0;i!= sizeof(argv)/sizeof(argv[0]);++i)
	//	cout << argv[i] << " ";
	//cout << endl;

	//利用argc
	for (int i = 0; i != argc; ++i)
		cout << argv[i] << " ";
	cout << endl;

	return 0;
}