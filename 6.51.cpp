//��дf���ĸ��汾�����һ��������Ϣ����֤֮ǰ��ϰ�Ĵ�

#include <iostream>
using namespace std;

void f()
{
	cout << "�޲���" << endl;
}

void f(int)
{
	cout << "һ��int" << endl;
}

void f(int,int)
{
	cout << "����int" << endl;
}

void f(double,double)
{
	cout << "����double" << endl;
}


int main()
{
	//������
	//f(2.56, 42);
	f(42);
	f(2.56, 3.14);
	f(42, 0);
	return 0;
}