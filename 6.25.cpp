//��дmain��������������ʵ�Σ���ʵ�����ӳ�string�����

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string s1(argv[1]);
	string s2(argv[2]);
	cout << s1 + s2 << endl;
	return 0;
}