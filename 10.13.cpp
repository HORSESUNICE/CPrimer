//��partition�㷨��ӡ���ȴ���5�ĵ���

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool moreThanFour(const string &s)
{
	return s.size() > 4;
}

int main()
{
	vector<string> vs;
	auto itend = partition(vs.begin(), vs.end(), moreThanFour);
	auto itbegin = vs.begin();
	while (itbegin != itend)
	{
		cout << *itbegin << endl;
		++itbegin;
	}
}