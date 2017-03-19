//使用stable_sort和isShorter将传递给你的elimDups的vector排序，打印验证正确性

//实现你自己的elimDups。
//测试分别在读取输入、调用unique后、调用erase后打印vector

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> &elimDups(vector<string> &vs)
{
	sort(vs.begin(), vs.end());

	auto ret = unique(vs.begin(), vs.end());

	vs.erase(ret, vs.end());
	return vs;
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	vector<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	elimDups(vs);
	stable_sort(vs.begin(), vs.end(), isShorter);
	for (auto s : vs)
		cout << s << endl;
}