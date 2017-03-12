//编写程序将来自文件的行保存在vector<string>中
//使用一个istringstream从vector读取数据，每次读取一个单词

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream bookin("C:/Users/mayangbin/win10/iostream/book.txt");
	vector<string> v;
	cout << v.size() << endl;

	//这样写会多输出一个空行
	//原因没搞很清楚
	//读取stringstream还是用geiline做判断条件
	//while (bookin)
	//{
	//	string s;
	//	getline(bookin, s);
	//	v.push_back(s);
	//}
	//cout << v[5] << endl;

	string s;
	while (getline(bookin, s))
	{
		v.push_back(s);
	}
	bookin.close();

	cout << v.size() << endl;
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		istringstream is(*it);
		string word;
		while (is >> word)
			cout << word << " ";
		cout << endl;
	}
}