//ͳ����ff��fl��fi���ַ����и���

#include <iostream>

using namespace std;

int main()
{
	char ch1, ch2;
	int ff, fl, fi;
	ff = fl = fi = 0;
	//while (cin >> ch)		>>������ȷ��ȡ��ֱ�Ӻ��Կհ�(�ո��Ʊ�����)
	while (cin.get(ch1))
	{
		if (ch1 == 'f')
		{
			cin.get(ch2);
			switch (ch2)
			{
			case 'f':
				++ff;
				break;
			case 'l':
				++fl;
				break;
			case 'i':
				++fi;
				break;
			default:
				break;
			}
		}
		else
			continue;
	}

	cout << "ff :" << ff << endl;
	cout << "fl :" << fl << endl;
	cout << "fi :" << fi << endl;
	return 0;
}