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

	maxs = v[0];//将初始的最多单词设置为第一个输入的单词
	int max = 0;//用来统计重复最多的单词连续出现次数
	int n = 1;//记录单个单词重复次数

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