//��ȡһ�ε���ֱ�������������εĴ�д��ĸ��ͷ�ĵ��ʲ�����������������˵�����ظ�����

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s, pres;
	bool b = false;
	while (cin >> s)
	{
		if (!isupper(s[0]))
			continue;
		if (s == pres)
		{
			b = true;
			cout << s << " twice!" << endl;
			break;
		}
		else
			pres = s;
	}
	if (b == false)
		cout << "no repeat!" << endl;
	return 0;
}