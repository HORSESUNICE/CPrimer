//��д6.33��ʹ���������������ִ�й����йص���Ϣ���������ʱ���vector�����С���ֱ��ڴ򿪺͹رյ���������±���ִ���������

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printv(vector<string> &v, int index)
{
	auto sz = v.size();
	if (!v.empty() && index != sz)
	{
		//define NDEBUG �رյ���
		#ifndef NDEBUG
		cout << "vector.size() = " << sz << endl;
		#endif  

		cout << v[index++] << endl;
		printv(v, index);
	}
}

int main()
{
	vector<string> v{ "aaa","bbb","ccc" };
	printv(v, 0);
	return 0;
}