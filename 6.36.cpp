//��д������������������������Ҹ��������10��string���󣬲�Ҫʹ��β�÷������͡�decltype�����ͱ���

#include <iostream>
#include <string>

using namespace std;

string s1[10] = { "a","b","c","d","e","f","g","h","i","j" };
string s2[10] = { "A","B","C","D","E","F","G","H","I","J" };

string(&arrre(int i))[10]
{
	return (i % 2) ? s1 : s2;
}

int main()
{
	string(&p)[10] = arrre(1);
	//�����ʼ������,����ķ�ʽ�ǲ��е�
	//string(&p)[10];
	//p = arrre(1);
	for (int i = 0; i != 10; ++i)
		cout << *(p + i) << " ";//��ָ���������Ҳ�ǿ��Ե�
	cout << endl;
	return 0;
}