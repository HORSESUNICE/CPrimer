//�������������������һ�����Եڶ����Ľ��
//�޸�ʹ�ڶ�����Ϊ0�׳��쳣����try�����쳣��catch����Ƿ���������������ִ��

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		try
		{
			if (0 == b)
				throw runtime_error("��������Ϊ0��");
			else
				cout << a << " / " << b << " = " << a / b << endl;
		}
		catch (runtime_error err)
		{
			cout << err.what() << endl;
			cout << "continue? y or n ";
			char c;
			cin >> c;
			if (c == 'n')
				break;
		}
	}
	return 0;
}