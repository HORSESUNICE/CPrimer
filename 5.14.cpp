#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string s, pres, maxs;
	vector<string> v;
	while (cin >> s)
		v.push_back(s);

	maxs = v[0];//����ʼ����൥������Ϊ��һ������ĵ���
	int max = 0;//����ͳ���ظ����ĵ����������ִ���
	int n = 1;//��¼���������ظ�����

	for (auto beg = v.begin(); beg != v.end(); ++beg)
	{
		if (*beg == pres)
			++n;
		else 
		{
			if (n > max)
			{
				max = n;
				maxs = pres;
			}
			n = 1;
		}		
		pres = *beg;
	}
	if (1 == max)
		cout << "no repeat!" << endl;
	else
		cout << "max word " << maxs << " : " << max << endl;


	return 0;
}