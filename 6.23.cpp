//±‡–¥print ‰»Îint i = 0;int j[2] = { 0,1 };

#include <iostream>
using namespace std;

void printi(const int i)
{
	cout << i << endl;
}

void printiar(const int(&i)[2])
{
	for (auto j : i)
		cout << j << " ";
	cout << endl;
}

int main()
{
	int i = 0;
	int j[2] = { 0,1 };
	printi(i);
	printiar(j);
	return 0;
}