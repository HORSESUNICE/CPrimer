//ÔÚSales_dataÀàÖÐÌí¼Ó¹¹Ôìº¯Êý£¬±àÐ´Ò»¶Î³ÌÐòÊ¹ÓÃÃ¿¸ö¹¹Ôìº¯Êý

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
	string bookNo;
	double revenue = 0;
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;

	//¹¹Ôìº¯Êý
	Sales_data() = default;
	//ÕâÀïµÄnºÍp¶¼¿ÉÒÔÉèÎªconstÀàÐÍ
	//Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s, const unsigned n, const double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s):bookNo(s){}
	//¹¹Ôìº¯ÊýÀàÄÚÉùÃ÷£¬ÀàÍâ¶¨Òå
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
	Sales_data s1, s2("123-123-123", 2, 10), s3("123-123-123"), s4(cin);
	print(cout, s1) << endl;
	print(cout, s2) << endl;
	print(cout, s3) << endl;
	print(cout, s4) << endl;

	return 0;
}