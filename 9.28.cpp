//编写函数，接受一个forward_list<string>和两个string.
//函数在链表中查找第一个string,将第二个string插入到第一个string之后位置
//若第一个string未在链表中,则将第二个string插入到链表尾部

#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

//返回值要改为非引用类型
//forward_list<string>::iterator assert(forward_list<string> &fs, const string &s1, const string &s2)
forward_list<string>::iterator& assert(forward_list<string> &fs, const string &s1, const string &s2)
{
	auto prev = fs.before_begin();
	auto curr = fs.begin();
	while (curr != fs.end())
	{
		if (*curr == s1)
		{
			//1>c:\users\mayangbin\win10\c++\cp9\cp9\9.28.cpp(20)
			//: warning C4172: 返回局部变量或临时变量的地址
			return fs.insert_after(curr, s2);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	//c:\users\mayangbin\win10\c++\cp9\cp9\9.28.cpp(30)
	//: warning C4172: 返回局部变量或临时变量的地址
	return fs.insert_after(prev, s2);
}

int main()
{
	forward_list<string> fl{ "hello","world","i","C++" };
	assert(fl, "i", "love");
	auto it = fl.begin();
	while (it != fl.end())
	{
		cout << *it << endl;
		++it;
	}

	cout << "---------------" << endl;

	assert(fl, "hhh", "2333");
	it = fl.begin();
	while (it != fl.end())
	{
		cout << *it << endl;
		++it;
	}

	forward_list<string> f{ "hello","world","i","C++" };
	forward_list<string>::iterator& itf= f.insert_after(f.begin(), "hhh");
}