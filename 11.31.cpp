//��д������һ�����ߺ���Ʒ��multimap,ʹ��find��multimap�в���һ��Ԫ�ز���eraseɾ��
//ȷ����ĳ�����Ԫ�ز���mapʱҲ������������

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	multimap<string, string> book{ {"myb","cal"},{"myb","liner algebra"},{"sht","sss"} };
	string delBook;
	cin >> delBook;
	auto it = book.find(delBook);
	if (it != book.end())
		book.erase(it);

	for (auto m : book)
		cout << m.first << " " << m.second << endl;
}