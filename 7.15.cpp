//ΪPerson�������ȷ�Ĺ��캯��

#include <iostream>
#include <string>
class Person {
public:
	std::string name;
	std::string address;

public:
	Person() = default;
	Person(const std::string &n, const std::string &a) :name(n), address(a) {};
	Person(std::istream &is) { is >> this->name >> this->address; }

};

int main()
{
	//��������
	//mike hz
	Person p(std::cin);
	std::cout << p.name << " " << p.address << std::endl;
	return 0;
}