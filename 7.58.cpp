//��̬��Ա�������Ͷ���
#include <iostream>
#include <vector>
class Example
{
public:
	//ֻ�о�̬��Ա�������������ڳ�ʼֵ,����ҪΪ����
	//static double rate = 6.5;
	//static const double rate = 6.5;
	static double rate;
	
	static const int vecSize = 20;

	//static std::vector<double> vec(vecSize);

	static std::vector<double> vec;
};

double Example::rate = 1.2;
std::vector<double> Example::vec(20);

int main()
{
	std::cout << Example::rate << std::endl;
	std::cout << Example::vec.size() << std::endl;
}