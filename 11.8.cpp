//��д������vector������set�б��治�ظ��ĵ���

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main()
{
	//vector<string> vs;
	//string s;
	//while (cin >> s)
	//{
	//	if (find(vs.begin(), vs.end(), s) == vs.end())
	//		vs.push_back(s);
	//}
	//for (auto s : vs)
	//	cout << s << endl;

	set<string> words;
	string s;
	while (cin >> s)
	{
		//set��insert��Ա����
		words.insert(s);
	}
	for (auto s : words)
		cout << s << endl;
}