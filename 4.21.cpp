//ʹ������������ҳ�vector<int>�����������Ƿ���
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5 };
	for (auto &i : v)
		i % 2 == 0 ? i = i : i *= 2;
		//i= (i % 2 == 0) ? i : 2*i;
	for (auto &i : v)
		cout << i << endl;
	return 0;
}