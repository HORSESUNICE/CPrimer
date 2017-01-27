//将isShorter改成内联函数

#include <iostream>
#include <string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main()
{
	cout << "abc shorter or not than def ?  " << isShorter("ab", "def") << endl;
	return 0;
}