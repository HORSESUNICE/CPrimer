//ʹ��unique_copy��һ��vector�в��ظ�Ԫ�ؿ�������ʼΪ�յ�list��

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vi{ 1,1,3,5,7,3,8,7,5,9,4 };
	list<int> li;

	sort(vi.begin(),vi.end());

	//����������������li.begin()
	//�㷨�ǲ��ı�������С��
	//unique_copyҪ���ظ��������ڴ��
	unique_copy(vi.begin(), vi.end(), back_inserter(li));

	for (auto i : li)
		cout << i << endl;

}