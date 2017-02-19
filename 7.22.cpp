//�޸�Person������ʵ��ϸ��

#include <iostream>
#include <string>
class Person {
private:
	std::string name;
	std::string address;

public:
	Person() = default;
	Person(const std::string &n, const std::string &a) :name(n), address(a) {}
	Person(std::istream &is) { is >> this->name >> this->address; }
	std::string getName() const { return name; }
	std::string getAddress() const { return address; }

};

int main()
{
	//��������
	//mike hz
	Person p(std::cin);
	//��������Ҫ�ӵ��÷�()
	//std::cout << p.getName << " " << p.getAddress << std::endl;
	std::cout << p.getName() << " " << p.getAddress() << std::endl;
	return 0;
}