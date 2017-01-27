//��make_plural�����ڶ����βθ���Ĭ��ʵ��'s',�����°汾���success��failure�ĵ�����

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