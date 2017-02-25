//重写本节电话号码程序，从一个命名文件读取数据

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

	//定义在外面会重复输出号码
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
		//clear()只是重置状态位，而不清空流的内容
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