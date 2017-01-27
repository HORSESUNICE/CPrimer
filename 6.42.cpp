//给make_plural函数第二个形参赋予默认实参's',利用新版本输出success和failure的单复数

#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending="s")
{
	return (ctr > 1) ? word + ending : word;
}

int main()
{
	cout << "success -> " << make_plural(2, "success", "es") << endl;
	cout << "failure -> " << make_plural(2, "failure") << endl;
	return 0;
}