//������������:һ�������ļ�����������ļ�������ȡ�����ļ���������ż���ֿ�д�������ļ�

#include <iostream>
#include <iterator>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("C:/Users/mayangbin/win10/iostream/num.txt");
	ofstream ofs1("C:/Users/mayangbin/win10/iostream//js.txt");
	ofstream ofs2("C:/Users/mayangbin/win10/iostream//os.txt");

	istream_iterator<int> isit(ifs), eof;
	ostream_iterator<int> osit1(ofs1," "), osit2(ofs2,"\n");

	while (isit != eof)
	{
		if (*isit & 1)
			*osit1++ = *isit;
		else
			*osit2++ = *isit;
		++isit;
	}
}