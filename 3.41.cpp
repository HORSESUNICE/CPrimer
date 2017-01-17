//3.41 
//整型数组初始化vector对象 


#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iterator>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int array[7]{ 0 };
	for (auto &i : array)
		i = rand() % 8;

	vector<int> v;
	for (auto i : array)
		v.push_back(i);

	for (auto i : v)
		cout << i << endl;

	cout << "-------------------------" << endl;
	//直接利用数组初始化vector
	vector<int> v2(begin(array), end(array));

	for (auto i : v2)
		cout << i << endl;

	return 0;

}