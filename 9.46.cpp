//��д9.45,ʹ��λ�úͳ��ȹ���string��ֻʹ��insert

#include <iostream>
#include <string>

using namespace std;

string &change(string &s, const string &b, const string &e)
{
	//ֱ�Ӷ�s���е��޸�
	s.insert(0, b);
	s.insert(s.size(), e);
	return s;
}

int main()
{
	string word(" love ");
	string b("i");
	string e("c++");
	string s = change(word, b, e);
	cout << s << endl;
}