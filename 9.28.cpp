//��д����������һ��forward_list<string>������string.
//�����������в��ҵ�һ��string,���ڶ���string���뵽��һ��string֮��λ��
//����һ��stringδ��������,�򽫵ڶ���string���뵽����β��

#include <iostream>
#include <string>
#include <forward_list>

using namespace std;

//����ֵҪ��Ϊ����������
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
			//: warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ
			return fs.insert_after(curr, s2);
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	//c:\users\mayangbin\win10\c++\cp9\cp9\9.28.cpp(30)
	//: warning C4172: ���ؾֲ���������ʱ�����ĵ�ַ
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