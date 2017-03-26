//����һ��map���ؼ����Ǽ�ͥ���գ�ֵΪvector��������к��ӵ���
//��д��������µļ�ͥ�������м�ͥ��Ӻ���

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	map<string, vector<string>> family;
	ifstream ifs("C:/Users/mayangbin/win10/iostream/family.txt");

	string fn, ln;
	while (ifs >> fn >> ln)
	{
		family[fn].push_back(ln);
	}

	for (auto f : family)
	{
		cout << f.first << ":" << endl;
		for (auto l : f.second)
			cout << l << " ";
		cout << endl;
	}
}