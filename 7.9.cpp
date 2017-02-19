//给Person类添加读取和打印
#include <iostream>
#include <string>
class Person {
public:
	std::string name;
	std::string address;
};

std::istream &read(std::istream &is, Person &p)
{
	is >> p.name >> p.address;//private成员在类外部不可访问，改为public
	return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
	os << p.name << p.address;
	return os;
}