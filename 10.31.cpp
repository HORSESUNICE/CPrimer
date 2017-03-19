//�޸�10.30��ʹ��unique_copy,ֻ��ӡ���ظ�Ԫ��

#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vi, vic;
	istream_iterator<int> isit(cin), eof;

	while (isit != eof)
	{
		vi.push_back(*isit);
		++isit;
	}

	for (auto i : vi)
		cout << i << endl;

	cout << "-------------------------------" << endl;

	sort(vi.begin(), vi.end());
	unique_copy(vi.begin(), vi.end(), back_inserter(vic));

	for (auto i : vic)
		cout << i << endl;
}