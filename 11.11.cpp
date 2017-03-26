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

//set的成员都是const成员?看报错好像是这样的
//bool(book &, book &)”: 无法将参数 2 从“const book”转换为“book &”
//bool compare(book &b1, book &b2)
//一定要改为const
bool compare(const book &b1, const book &b2)
{
	return b1.isbn() > b2.isbn();
}

int main()
{
	//set自定义顺序不能写类似成员函数的单参数函数
	//一定要写两个参数的
	//set<book, decltype(book::compare)*> b(book::compare);

	//typedef bool (*ff)(const book &b1, const book &b2);
	//set<book, ff> b(compare);

	//一定要写类型名，这里函数名不能退化指针当类型
	//set<book, compare> b(compare);

	//set<book, decltype(compare)*> b(compare);
	//b = { "123","456" };
	b= { book("123"), book("456") };

	for (auto s : b)
		cout << s.isbn() << endl;
}