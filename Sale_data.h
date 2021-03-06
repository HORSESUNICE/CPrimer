#ifndef SALE_DATA_H
#define SALE_DATA_H

#include <iostream>
#include <string>

using namespace std;

class Sales_data {
	friend istream & read(istream &is, Sales_data &s);
	friend ostream & print(ostream &io, const Sales_data &s);

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
public:
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;
	//类内成员函数默认inline，类外定义时加inline声明不用加
	double avg_price() const { return revenue / units_sold; }

	Sales_data() = default;
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
	double price = 0;
	is >> s.bookNo >> s.units_sold >> price;
	s.revenue = price*s.units_sold;
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

#endif
