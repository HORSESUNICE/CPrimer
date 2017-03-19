//编写程序，利用count函数，读取int存入vector，打印有多少个元素值等于给定值

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	vector<int> vi;
	string s;
	//cin遇到空白就终止输入
	//cin >> s;
	getline(cin, s);
	int num;
	cin >> num;

	int n;
	istringstream is(s);
	while (is >> n)
		vi.push_back(n);

	cout << num << " occurs " << count(vi.begin(), vi.end(), num) << " times!" << endl;
}