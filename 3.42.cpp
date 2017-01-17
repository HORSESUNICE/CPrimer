//3.42
//将vector<int>拷贝给整型数组


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>

using namespace std;

int main()
{	
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	int s[10]{ 0 };
	
	for (decltype(v.size())i = 0; i != v.size();++i)
		s[i]=2*v[i];

	for (auto i : s)
		cout << i << " ";
	cout << endl;

	return 0;
}