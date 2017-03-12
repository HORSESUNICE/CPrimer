//编写程序处理一个vector<string>，元素都表示整型
//计算vector中所有元素的和。
//修改程序，使之计算浮点string的和

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	string s;
	//int sum = 0;
	double sum = 0;
	for (int i = 0; i != 3; ++i)
	{
		cin >> s;
		v.push_back(s);
		//sum += stoi(v[i]);
		sum += stod(v[i]);
	}

	cout << sum << endl;
}