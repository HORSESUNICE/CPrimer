//��д������������������������Ҹ��������10��string����ʹ��β�÷������͡�decltype�����ͱ���

#include <iostream>
#include <string>

using namespace std;

string s1[10] = { "a","b","c","d","e","f","g","h","i","j" };
string s2[10] = { "A","B","C","D","E","F","G","H","I","J" };

//ֱ��д������������ò������
string(&arrre(int i))[10]
{
	return (i % 2) ? s1 : s2;
}

auto arrre1(int i)->string(&)[10]
{
	return (i % 2) ? s1 : s2;
}

decltype(s1) &arrre2(int i)
{
	return (i % 2) ? s1 : s2;
}

typedef string(&re)[10];
re arrre3(int i)
{
	return (i % 2) ? s1 : s2;
}

int main()
{
	string(&p)[10] = arrre(1);
	string(&p1)[10] = arrre(2);
	string(&p2)[10] = arrre(1);
	string(&p3)[10] = arrre(2);

	for (int i = 0; i != 10; ++i)
		cout << *(p + i) << " ";
	cout << endl;

	for (int i = 0; i != 10; ++i)
		cout << *(p1 + i) << " ";
	cout << endl;

	for (int i = 0; i != 10; ++i)
		cout << *(p2 + i) << " ";
	cout << endl;

	for (int i = 0; i != 10; ++i)
		cout << *(p3 + i) << " ";
	cout << endl;

	return 0;
}