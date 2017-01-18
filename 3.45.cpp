//auto 重写3.43

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	//C++指针类型一定要严格匹配！

	int ia[3][4] = { 0 };
	srand((unsigned)NULL);
	//范围for除了最后一层都必须加&，这里加&是为了赋值
	for (auto &row : ia)
		for (auto &col : row)
			col = rand() % 12;

	cout << "----------------------" << "范围for" << endl;
	for (auto &row : ia)	//外层必须要用引用
	{
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "----------------------" << "下标" << endl;
	for (auto i = 0; i != 3; ++i)
	{
		for (auto j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	cout << "----------------------" << "指针" << endl;
	for (auto p1 = ia; p1 != ia + 3; ++p1)
	{
		for (auto p2 = *p1; p2 != *p1 + 4; ++p2)
			cout << *p2 << " ";
		cout << endl;
	}

	return 0;
}