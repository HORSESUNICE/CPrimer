//两个vector<int>检验是否其中一个是另一个前缀

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	vector<int> v1, v2;
	int n1 = rand() % 8, n2 = rand() % 8;
	for (int i = 0; i < n1; ++i)
		v1.push_back(rand() % 11);
	for (int i = 0; i < n2; ++i)
		v2.push_back(rand() % 11);
	
	//Example:
	//vector<int> v1{ 0,1,1,2 }, v2{ 0,1,1,2,3,5,8 };

	cout << "vector1 : ";
	for (auto i : v1)
		cout << i << " ";
	cout << endl;

	cout << "vector2 : ";
	for (auto i : v2)
		cout << i << " ";
	cout << endl;

	if (v1.size() < v2.size())
	{
		for (decltype(v1.size())i = 0; i != v1.size(); ++i)
			if (v1[i] != v2[i])
			{
				cout << "Not the same!" << endl;
				return 0;
			}
		cout << "The same!" << endl;
	}
	else
	{
		for (decltype(v2.size())i = 0; i != v2.size(); ++i)
			if (v1[i] != v2[i])
			{
				cout << "Not the same!" << endl;
				return 0;
			}
		cout << "The same!" << endl;
	}

	return 0;
}