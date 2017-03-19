//����string,ʹ��bind��check_size��һ��vector<int>���ҵ�һ������string���ȵ�ֵ

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const int &i, int sz)
{
	return i >= sz;
}

int main()
{
	vector<int> vs{ 1,2,3,4,5,6,7,8,9 };
	string s("hello");
	auto it = find_if(vs.begin(), vs.end(), bind(check_size, _1, s.size()));

	cout << *it << endl;
}