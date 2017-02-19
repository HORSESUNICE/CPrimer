//编写自己的Account类

#include <string>

class Account
{
public:
	static double rate()
	{
		return interestRate;
	}
	static double rate(double r);

private:
	std::string name;
	double amount;
	static double interestRate;
};

//不能加static只能在内部使用
double Account::interestRate = 0.03;

double Account::rate(double r)
{
	interestRate = r;
	return interestRate;
}

int main()
{

}