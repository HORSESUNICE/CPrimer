//��д���򣬴ӱ�׼�����ȡstring���У�����deque����дһ��ѭ�����õ�������ӡdeque��Ԫ��

#include <iostream>
#include <string>
#include <deque>
#include <sstream>

using namespace std;

int main()
{
	string line;
	getline(cin, line);
	istringstream is(line);

	deque<string> d;
	string s;
	while (is >> s)
		d.push_back(s);

	auto it = d.begin();
	while (it != d.end())
	{
		cout << *it << endl;
		++it;
	}
}