//�������������������һ�����Եڶ����Ľ��
//�޸�ʹ�ڶ�����Ϊ0�׳��쳣�����趨catch�����г���0�Ľ��

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (0 == b)
		throw runtime_error("��������Ϊ0��");
	else
		cout << a << " / " << b << " = " << a / b << endl;
	return 0;
}