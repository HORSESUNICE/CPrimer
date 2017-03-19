//标准库定义了一个count_if,使用它统计程序有多少单词长度超过6

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	cout << count_if(vs.begin(), vs.end(), [](const string &s) {return s.size() > 6; }) << endl;
}