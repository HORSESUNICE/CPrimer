//��д�Լ���Account��

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

//���ܼ�staticֻ�����ڲ�ʹ��
double Account::interestRate = 0.03;

double Account::rate(double r)
{
	interestRate = r;
	return interestRate;
}

int main()
{

}