//��д11.3���ʼ�������ʹ��insert�����±����

#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("C:/Users/mayangbin/win10/iostream/hello.txt");
	map<string, int> words;
	string s;
	while (ifs >> s)
	{
		auto ret = words.insert({ s,1 });
		if (!ret.second)
			++ret.first->second;
	}

	for (auto w : words)
		cout << w.first << " " << w.second << endl;
}