//��ȡһ�ε���ֱ�������������β�����������������˵�����ظ�����

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, pres;
	bool b = false;
	while (cin >> s)
	{
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