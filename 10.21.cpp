//��дһ��lambda,����һ��int������int�ݼ�Ϊ0��Ϊ0���ٵ���lambda���ٵݼ�
//lambda����һ��bool,ָ�������Ƿ�Ϊ0

#include <iostream>
using namespace std;

int main()
{
	int i = 7;
	auto f = [i]()mutable->bool
	{
		if (i > 0)
		{
			cout << i << endl;
			--i;
			return false;
		}
		else
		{
			cout << 0 << endl;
			return true;
		}

	};

	for (int i = 0; i != 10; ++i)
		f();
}
