//��д8.4,��ÿ��������Ϊ����Ԫ�ش洢

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> v;
	std::string s;

	std::ifstream f("C:/Users/mayangbin/win10/iostream/hello.txt");
	std::ifstream ifs;

	while (f>>s)
		v.push_back(s);

	f.close();

	for (auto i = v.begin(); i != v.end(); i++)
		std::cout << *i << std::endl;

	return 0;
}