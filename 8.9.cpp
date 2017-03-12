//ʹ��P281��һ����ϰ����д�ĺ�����ӡһ��istringstream���������

#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

std::istream &output1(std::istream & is)
{
	std::string s;

	//while (!is.eof())
	//��istringstream���ܼ�eof�жϷ���������һ���ַ���
	//while (is >> s, !is.eof())
	while (is >> s)
	{
		//�ں����������ȡis������ctrl+z���ٴν��������
		//is >> s;

		std::cout << s;
	}
	is.clear();
	return is;
}

std::istream &output2(std::istream & is)
{
	std::string s;

	//while (!is.eof())
	//��istringstream���ܼ�eof�жϷ���������һ���ַ���
	while (is >> s, !is.eof())
	{
		//�ں����������ȡis������ctrl+z���ٴν��������
		//is >> s;

		std::cout << s;
	}
	is.clear();
	return is;
}

std::istream &foutput(std::istream & is)
{
	int i;
	while (is >> i, !is.eof())
	{
		if (is.bad())
			throw std::runtime_error("IO ERROR");
		if (is.fail())
		{
			std::cerr << "is.fail" << std::endl;
			is.clear();
			is.ignore(100, '\n');
			continue;
		}
		std::cout << i << std::endl;
	}
	is.clear();
	return is;
}

int main()
{
	std::string s;
	//std::istringstream is;

	std::ostringstream msg;
	//��Ϊ�������endl���Կ�����������ַ�������
	msg << "C++ Primer" << std::endl;
	std::istringstream in(msg.str());
	output2(in);

	std::cout << std::endl;

	while (std::getline(std::cin, s))
	{
		//Ҫô���캯��ֱ�Ӱ󶨣�Ҫô��str��Ա������
		//is.str(s);
		std::istringstream is(s);
		output1(is);
	}


	return 0;
}