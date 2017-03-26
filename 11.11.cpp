#include <iostream>
#include <set>
#include <string>

using namespace std;

class book
{
public:
	book(const string &s)
	{
		this->bookNo = s;
	}

	const string isbn() const
	{
		return bookNo;
	}

	//bool compare(const book &b)
	//{
	//	return this->isbn > b.isbn;
	//}
private:
	string bookNo;
};

//set�ĳ�Ա����const��Ա?�����������������
//bool(book &, book &)��: �޷������� 2 �ӡ�const book��ת��Ϊ��book &��
//bool compare(book &b1, book &b2)
//һ��Ҫ��Ϊconst
bool compare(const book &b1, const book &b2)
{
	return b1.isbn() > b2.isbn();
}

int main()
{
	//set�Զ���˳����д���Ƴ�Ա�����ĵ���������
	//һ��Ҫд����������
	//set<book, decltype(book::compare)*> b(book::compare);

	//typedef bool (*ff)(const book &b1, const book &b2);
	//set<book, ff> b(compare);

	//һ��Ҫд�����������ﺯ���������˻�ָ�뵱����
	//set<book, compare> b(compare);

	//set<book, decltype(compare)*> b(compare);
	//b = { "123","456" };
	b= { book("123"), book("456") };

	for (auto s : b)
		cout << s.isbn() << endl;
}