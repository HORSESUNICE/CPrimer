//��д����������һ����ʾ���ֵ�string��
//�����ֱ��ʾǰ׺�ͺ�׺���ַ���
//ʹ�õ������Լ�insert��append
//��ǰ׺�ͺ�׺��ӵ��������֣��������µ�string����

#include <iostream>
#include <string>

using namespace std;

string &change(string &s, const string &b, const string &e)
{
	//ֱ�Ӷ�s���е��޸�
	s.insert(s.begin(), b.begin(), b.end());
	s.append(e.begin(), e.end());
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