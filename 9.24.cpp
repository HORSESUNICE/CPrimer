//编写程序分别使用at、下标运算符、front、begin提取vector中首元素，在一个空vector中测试程序

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> iv;
	//cout << iv.at(0) << endl;
	//cout << iv[0] << endl;
	//cout << iv.front() << endl;
	cout << *iv.begin() << endl;
}