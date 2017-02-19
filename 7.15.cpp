//为Person类添加正确的构造函数

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
	//测试数据
	//mike hz
	Person p(std::cin);
	std::cout << p.name << " " << p.address << std::endl;
	return 0;
}