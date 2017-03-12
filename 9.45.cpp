//编写函数，接受一个表示名字的string和
//两个分别表示前缀和后缀的字符串
//使用迭代器以及insert和append
//将前缀和后缀添加到给定名字，将生成新的string返回

#include <iostream>
#include <string>

using namespace std;

string &change(string &s, const string &b, const string &e)
{
	//直接对s进行的修改
	s.insert(s.begin(), b.begin(), b.end());
	s.append(e.begin(), e.end());
	return s;
}

int main()
{
	string word(" love ");
	string b("i");
	string e("c++");
	string s = change(word, b, e);
	cout << s << endl;
}