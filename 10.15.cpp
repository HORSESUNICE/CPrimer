//��дһ��lambda,�������ں�����int,������һ��int,��������int�ĺ�

#include <iostream>

using namespace std;

int main()
{
	int x = 7;
	auto f = [x](int i) {return x + i; };
	cout << f(7) << endl;
}