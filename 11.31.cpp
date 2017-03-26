//编写程序定义一个作者和作品的multimap,使用find在multimap中查找一个元素并且erase删除
//确保你的程序在元素不在map时也可以正常运行

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	multimap<string, string> book{ {"myb","cal"},{"myb","liner algebra"},{"sht","sss"} };
	string delBook;
	cin >> delBook;
	auto it = book.find(delBook);
	if (it != book.end())
		book.erase(it);

	for (auto m : book)
		cout << m.first << " " << m.second << endl;
}