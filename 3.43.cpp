//�ֱ���:1.��Χfor 2.�±� 3.ָ�������ά����

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
	for (int(&row)[4] : ia)	//������Ҫ������
	{
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	cout << "----------------------" << "�±�" << endl;
	for (int i = 0; i != 3; ++i)
	{
		for (int j = 0; j != 4; ++j)
			cout << ia[i][j] << " ";
		cout << endl;
	}
	
	//int m[][4] = ia;
	//int m[][4]={...}ֻ��������ֵ,��������ʾӦʹ��{...}��ʼ���ۺ϶���
	//for (int i[][4] = ia; i != ia + 3; ++i)	����Ҫдint(*i)[4],*��ʱ���Ϊ����䲻��ֱ�Ӹ�ֵ
	//{
	//	for (int *p = *ia; p != *ia + 4; ++p)	pӦ����i����ʼ��������д��Զֻ��������һ��
	//		cout << *p << " ";
	//	cout << endl;
	//}

	cout << "----------------------" << "ָ��" << endl;
	for (int (*p1)[4] = ia; p1 != ia + 3; ++p1)
	{
		for (int *p2 = *p1; p2 != *p1 + 4; ++p2)
			cout << *p2 << " ";
		cout << endl;
	}

	return 0;
}