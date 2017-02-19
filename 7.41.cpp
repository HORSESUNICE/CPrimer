//使用委托构造函数重写编写Sale_data类，给每个构造函数添加一条输出语句了解委托构造函数执行顺序

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

	Sales_data(const string &s, const unsigned n, const double p) :bookNo(s), units_sold(n), revenue(p*n) 
	{
		cout << "const string &s, const unsigned n, const double p构造函数" << endl;
	}
	//委托构造函数
	Sales_data() :Sales_data("", 0, 0) { cout << "默认构造函数" << endl; }
	Sales_data(const string &s) :Sales_data(s, 0, 0) { cout << "const string &s构造函数" << endl; }
	Sales_data(istream &is) :Sales_data() 
	{  
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price*units_sold;
		cout << "istream &is构造函数" << endl;
	}
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
	Sales_data s1("123-123-123", 1, 15), s2("123-123-123"), s3, s4(cin);
	return 0;
}