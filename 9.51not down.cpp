//设计一个类，三个unsigned成员，年月日
//为其编写构造函数，接受表示日期的string参数
//构造函数应该能处理不同数据格式
//如Jan 1,1900、 1/1/1990、 Jan 1 1990

//这题仔细写可以写的非常复杂
//暂时先写一个简单版本

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cal
{
public:
	cal(const string &s)
	{
		int size = 0;
		if (s.find(',') != string::npos)
			size = 1;
		else if (s.find('/') != string::npos)
			size = 2;
		else
			size = 3;
		switch (size)
		{
		case 1:
			year = s.substr(6, 4);
			month = s.substr(0, 3);
			day= s.substr(0, 3);

		}
	}

private:
	string year;
	string month;
	string day;
};

int main()
{

}