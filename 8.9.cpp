//使用P281第一个练习所编写的函数打印一个istringstream对象的内容

#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>

std::istream &output1(std::istream & is)
{
	std::string s;

	//while (!is.eof())
	//对istringstream不能加eof判断否则会少输出一个字符串
	//while (is >> s, !is.eof())
	while (is >> s)
	{
		//在函数体里面读取is，遇到ctrl+z会再次将内容输出
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
	//对istringstream不能加eof判断否则会少输出一个字符串
	while (is >> s, !is.eof())
	{
		//在函数体里面读取is，遇到ctrl+z会再次将内容输出
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
	//因为这里加了endl所以可以完整输出字符串内容
	msg << "C++ Primer" << std::endl;
	std::istringstream in(msg.str());
	output2(in);

	std::cout << std::endl;

	while (std::getline(std::cin, s))
	{
		//要么构造函数直接绑定，要么用str成员函数绑定
		//is.str(s);
		std::istringstream is(s);
		output1(is);
	}


	return 0;
}