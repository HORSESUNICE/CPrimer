//��д���ڵ绰������򣬴�һ�������ļ���ȡ����

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

bool valid(const string &s)
{
	return true;
}

string format(const string &s)
{
	return s;
}

struct ph
{
	string name;
	vector<string> phone;
};

int main()
{
	ifstream phone("C:/Users/mayangbin/win10/iostream/phone.txt");
	vector<ph> v;
	string s;
	istringstream is;
	while (getline(phone, s))
	{
		ph p;
		is.clear();
		is.str(s);
		is >> p.name;
		string phonenum;
		while (is >> phonenum)
			p.phone.push_back(phonenum);
		v.push_back(p);
	}
	phone.close();

	//������������ظ��������
	//ostringstream os;
	//ostringstream formatted, bad;
	for (auto &person : v)
	{
		ostringstream os;
		ostringstream formatted, bad;
		//os.clear();
		//os.str("");
		//formatted.clear();
		//formatted.str("");
		//bad.clear();
		//bad.str("");
		//clear()ֻ������״̬λ�����������������
		//os.clear();
		for (auto &phonenum : person.phone)
		{
			//formatted.clear();
			//bad.clear();

			if (!valid(phonenum))
				bad << phonenum << " ";
			else
				formatted << format(phonenum) << " ";
		}
		if (bad.str().empty())
			os << person.name << " " << formatted.str() << endl;
		else
			os << person.name << " " << bad.str() << endl;
		cout << os.str();
	}

}