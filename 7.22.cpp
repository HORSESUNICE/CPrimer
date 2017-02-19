//修改Person类隐藏实现细节

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
	//测试数据
	//mike hz
	Person p(std::cin);
	//函数调用要加调用符()
	//std::cout << p.getName << " " << p.getAddress << std::endl;
	std::cout << p.getName() << " " << p.getAddress() << std::endl;
	return 0;
}