//ʵ�����Լ���elimDups��
//���Էֱ��ڶ�ȡ���롢����unique�󡢵���erase���ӡvector

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> &elimDups(vector<string> &vs)
{
	cout << "cin------------------" << endl;
	for (auto s : vs)
		cout << s << endl;
	
	sort(vs.begin(), vs.end());
	cout << "sort------------------" << endl;
	for (auto s : vs)
		cout << s << endl;

	auto ret = unique(vs.begin(), vs.end());
	cout << "unique------------------" << endl;
	for (auto s : vs)
		cout << s << endl;

	vs.erase(ret, vs.end());
	cout << "erase------------------" << endl;
	for (auto s : vs)
		cout << s << endl;

	return vs;
}

int main()
{
	vector<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	elimDups(vs);
}