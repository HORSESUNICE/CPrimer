//��ĸ���쵽����֮�ϳ�Ϊ�ϳ�ͷ����ĸ���쵽����֮�³�Ϊ�³�ͷ��
//��д�������һ�������ļ��������Ĳ������������ֵĵ���

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