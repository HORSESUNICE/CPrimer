//��Person����Ӷ�ȡ�ʹ�ӡ
#include <iostream>
#include <string>
class Person {
public:
	std::string name;
	std::string address;
};

std::istream &read(std::istream &is, Person &p)
{
	is >> p.name >> p.address;//private��Ա�����ⲿ���ɷ��ʣ���Ϊpublic
	return is;
}

std::ostream &print(std::ostream &os, const Person &p)
{
	os << p.name << p.address;
	return os;
}