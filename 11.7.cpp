//定义一个map，关键词是家庭的姓，值为vector，保存家中孩子的名
//编写代码添加新的家庭及向已有家庭添加孩子

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	map<string, vector<string>> family;
	ifstream ifs("C:/Users/mayangbin/win10/iostream/family.txt");

	string fn, ln;
	while (ifs >> fn >> ln)
	{
		family[fn].push_back(ln);
	}

	for (auto f : family)
	{
		cout << f.first << ":" << endl;
		for (auto l : f.second)
			cout << l << " ";
		cout << endl;
	}
}