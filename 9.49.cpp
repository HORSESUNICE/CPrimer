//字母延伸到中线之上称为上出头，字母延伸到中线之下称为下出头，
//编写程序读入一个单词文件，输出最长的不含有这两部分的单词

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	ifstream ifs("C:/Users/mayangbin/win10/iostream/mid.txt");
	ostringstream os;
	string s;
	string mid("aceimnorstuvwxz");
	while (ifs >> s)
	{
		string::size_type i = 0;
		if ((i = s.find_first_not_of(mid, i)) != string::npos)
			continue;
		if (os.str().empty())
			os << s;
		else
			os << " " << s;
	}
	if (os.str().size() == 0)
		cout << "no word is chosen!" << endl;
	else
		cout << os.str();

}