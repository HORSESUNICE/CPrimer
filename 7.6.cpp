//定义自己版本的add、read、print

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;
};

Sales_data & Sales_data::combine(const Sales_data &anothers) {
	this->units_sold += anothers.units_sold;
	this->revenue += anothers.revenue;
	return *this;
}

string Sales_data::isbn() const {
	return bookNo;
}

Sales_data add(const Sales_data &s1, const Sales_data &s2)
{
	Sales_data s = s1;//拷贝操作看的是底层const，顶层const没关系
	s.combine(s2);//为了可以使用combine函数要将之前的combine形参定义改成const
	return s;
}

istream & read(istream &is, Sales_data &s)
{
	is >> s.bookNo >> s.units_sold;
	s.revenue = 10 * s.units_sold;
	return is;
}

ostream & print(ostream &io, const Sales_data &s)//这里把s改成const要把isbn改为const成员函数
{
	io << s.isbn() << " " << s.units_sold << " " << s.revenue;
	return io;
}

int main()
{
	Sales_data s1, s2, s;
	//const Sales_data s1;
	//Sales_data s2;

	//combine()做了类似如下的操作是可行的
	//int a = 3;
	//const int &b = a;
	//int c = b;
	//cout << c << endl;
	
	//s1.bookNo = "123-123-123";
	//s1.units_sold = 1;
	//s1.revenue = 10;

	//s2.bookNo = "123-123-123";
	//s2.units_sold = 1;
	//s2.revenue = 15;

	//Sales_data s = add(s1, s2);
	//cout << s.isbn() << " " << s.units_sold << " " << s.revenue << endl;

	read(cin, s1);
	read(cin, s2);
	s = add(s1, s2);
	print(cout, s) << endl;
	
	//测试数据
	//123-123-123 1 123-123-123 2

	return 0;
}