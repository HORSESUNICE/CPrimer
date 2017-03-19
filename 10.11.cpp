//ʹ��stable_sort��isShorter�����ݸ����elimDups��vector���򣬴�ӡ��֤��ȷ��

//ʵ�����Լ���elimDups��
//���Էֱ��ڶ�ȡ���롢����unique�󡢵���erase���ӡvector

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