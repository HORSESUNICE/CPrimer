//��д���򣬲��Ҳ�ɾ��forward_list<int>�е�����Ԫ��

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
	forward_list<int> fi{ 1,2,3,4,5,6,7,8,9,10 };
	auto prev = fi.before_begin();
	auto curr = fi.begin();

	while (curr != fi.end())
	{
		if (*curr & 1)
			//prev���ֲ���
			//ɾ����Ҫ����curr
			//fi.erase_after(prev);
			curr = fi.erase_after(prev);
		else
		{
			//��++�ƶ�prevҲ�ǿ��Ե�
			//++prev;
			prev = curr;
			++curr;
		}
	}

	curr = fi.begin();

	while (curr != fi.end())
	{
		cout << *curr << endl;
		++curr;
	}
}