//auto ��д3.43

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
	//C++ָ������һ��Ҫ�ϸ�ƥ�䣡

	int ia[3][4] = { 0 };
	srand((unsigned)NULL);
	//��Χfor�������һ�㶼�����&�������&��Ϊ�˸�ֵ
	for (auto &row : ia)
		for (auto &col : row)
			col = rand() % 12;

	cout << "----------------------" << "��Χfor" << endl;
	for (auto &row : ia)	//������Ҫ������
	{
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "----------------------" << "�±�" << endl;
	for (auto i = 0; i != 3; ++i)
	{
		for (auto j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}

	cout << "----------------------" << "ָ��" << endl;
	for (auto p1 = ia; p1 != ia + 3; ++p1)
	{
		for (auto p2 = *p1; p2 != *p1 + 4; ++p2)
			cout << *p2 << " ";
		cout << endl;
	}

	return 0;
}