//修改Sales_data类隐藏实现细节，之前对于Sales_data操作的程序应该可以继续使用，重新编译使之正常工作

#include <iostream>
#include <string>

using namespace std;

class Sales_data {
	friend istream & read(istream &is, Sales_data &s);
	friend ostream & print(ostream &io, const Sales_data &s);
	//friend Sales_data add(const Sales_data &s1, const Sales_data &s2);
	//add里面没有直接访问类私有成员，可以不声明友员

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
public:
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;

	Sales_data(const string &s, const unsigned n, const double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s) :bookNo(s) {}
	Sales_data(istream &is);
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

Sales_data::Sales_data(istream &is)
{
	double price = 0;
	is >> bookNo >> units_sold >> price;
	revenue = price*units_sold;
}

int main()
{
	Sales_data s1("123-123-123", 1, 15), s2("123-123-123", 2, 10);
	Sales_data s = add(s1, s2);
	print(cout, s) << endl;
	return 0;
}