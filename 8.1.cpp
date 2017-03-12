//��д��������һ��istream&������istream&���˺����Ӹ������ж�ȡ���ݣ�ֱ�������ļ�������������ȡ�����ݴ�ӡ�ڱ�׼���
//��ɲ������ٷ�����֮ǰ������λ��ʹ�䴦����Ч

#include <iostream>
#include <string>
#include <stdexcept>

std::istream &output(std::istream & is)
{
	std::string s;

	//while (!is.eof())
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
	//�����һ��ctrl+z�Ŀո���Ϊʲô
	output(std::cin);
	//foutput(std::cin);

	return 0;
}