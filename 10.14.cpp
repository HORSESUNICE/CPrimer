//��дlambda����������int,�������ǵĺ�

#include <iostream>

using namespace std;
//lambdaǰ��Ҫ��auto ������,���Ҫ�зֺ�
auto f = [](int a, int b)->int {return a + b; };

auto f2()->int { return 4; }

int main()
{
	//lambda�ǲ�����һ�㺯��һ�������ַ��
	//cout << f << endl;
	cout << f(1, 2) << endl;
	//���ص���f2�ĵ�ַ
	cout << f2 << endl;
	cout << f2() << endl;
}