//编写一个构造函数，用我们提供的雷内初始值显式地初始化成员

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold;
	double revenue;
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;

	Sales_data(const string &s) :bookNo(s), units_sold(0), revenue(0) {};
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
	Sales_data s = s1;
	s.combine(s2);
	return s;
}

istream & read(istream &is, Sales_data &s)
{
	is >> s.bookNo >> s.units_sold;
	s.revenue = 10 * s.units_sold;
	return is;
}

ostream & print(ostream &io, const Sales_data &s)
{
	io << s.isbn() << " " << s.units_sold << " " << s.revenue;
	return io;
}

int main()
{
	Sales_data s("123-123-123");
	print(cout, s) << endl;
	return 0;
}