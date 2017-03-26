//定义你自己版本的单词转换程序

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>

using namespace std;

string transFun(const string &s, map<string, string> &tr)
{
	auto end = tr.end();
	if (tr.find(s) != end)
		return tr[s];
	else
		return s;
}

void wordTrans(const string &rules,const string &needCh)
{
	ifstream ifs1(rules), ifs2(needCh);
	ofstream of("C:/Users/mayangbin/win10/iostream/transResult.txt");
	map<string, string> trans;
	string keyValue, mappedValue;
	while (ifs1 >> keyValue&&getline(ifs1, mappedValue))
		trans[keyValue] = mappedValue.substr(1);

	//for (auto m : trans)
	//	cout << m.first << " " << m.second << endl;

	string word;
	string line;

	while (getline(ifs2, line))
	{
		istringstream is(line);
		int start = 1;
		while (is >> word)
		{
			if (start)
			{
				start = 0;
				of << transFun(word, trans);
			}
			else
				of << " " << transFun(word, trans);
		}
		of << endl;
	}
}

int main()
{
	wordTrans("C:/Users/mayangbin/win10/iostream/changeRules.txt", "C:/Users/mayangbin/win10/iostream/needTrans.txt");
}