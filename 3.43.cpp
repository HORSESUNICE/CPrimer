//分别用:1.范围for 2.下标 3.指针输出二维数组

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
	for (int(&row)[4] : ia)	//外层必须要用引用
	{
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "----------------------" << "下标" << endl;
	for (int i = 0; i != 3; ++i)
	{
		for (int j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}
	
	//int m[][4] = ia;
	//int m[][4]={...}只能这样赋值,编译器显示应使用{...}初始化聚合对象
	//for (int i[][4] = ia; i != ia + 3; ++i)	必须要写int(*i)[4],*暂时理解为数组间不能直接赋值
	//{
	//	for (int *p = *ia; p != *ia + 4; ++p)	p应该用i来初始化，这样写永远只输出数组第一行
	//		cout << *p << " ";
	//	cout << endl;
	//}

	cout << "----------------------" << "指针" << endl;
	for (int (*p1)[4] = ia; p1 != ia + 3; ++p1)
	{
		for (int *p2 = *p1; p2 != *p1 + 4; ++p2)
			cout << *p2 << " ";
		cout << endl;
	}

	return 0;
}