//�������һ�����ӣ��������insert�������begin��������ʲô����д������֤

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7,8,9 };
	auto begin = vi.begin();
	while (begin != vi.end())
	{
		++begin;
		//iterator!=pointer�ǻ�ʧЧ���³��������
		vi.insert(begin, 42);
		++begin;
	}

	begin = vi.begin();
	while (begin != vi.end())
	{
		cout << *begin << endl;
		++begin;
	}
}