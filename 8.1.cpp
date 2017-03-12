//编写函数接受一个istream&，返回istream&。此函数从给定流中读取数据，直至遇见文件结束符，将读取的数据打印在标准输出
//完成操作后再返回流之前对流复位，使其处于有效

#include <iostream>
#include <string>
#include <stdexcept>

std::istream &output(std::istream & is)
{
	std::string s;

	//while (!is.eof())
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
	//多输出一个ctrl+z的空格是为什么
	output(std::cin);
	//foutput(std::cin);

	return 0;
}