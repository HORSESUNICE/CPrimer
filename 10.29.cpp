//��д����ʹ������������ȡһ���ı��ļ�������vector<string>

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iterator>

using namespace std;

int main()
{
	ifstream ifs("C:/Users/mayangbin/win10/iostream/hello.txt");
	istream_iterator<string> it(ifs), eof;
	vector<string> vs;

	while (it != eof)
	{
		vs.push_back(*it++);
	}

	for (auto s : vs)
		cout << s << endl;
}