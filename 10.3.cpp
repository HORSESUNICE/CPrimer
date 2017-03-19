//用accumulate求一个vector<int>元素的和

#include <iostream>
#include <vector>
#include <numeric>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	vector<int> vi;
	string s;
	getline(cin, s);

	int n;
	istringstream is(s);
	while (is >> n)
		vi.push_back(n);

	cout << "sum of vector is :" << accumulate(vi.begin(), vi.end(), 0) << endl;
}