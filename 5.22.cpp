//�����ӵ�goto��дΪѭ��

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int sz = rand() % 10;
	while (sz <= 0)
		sz = rand() % 10;
	cout << sz << endl;

	return 0;
}