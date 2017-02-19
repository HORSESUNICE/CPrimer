//使用istream构造函数重写229程序

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;

	//构造函数
	Sales_data() = default;
	//这里的n和p都可以设为const类型
	//Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s, const unsigned n, const double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s) :bookNo(s) {}
	//构造函数类内声明，类外定义
	Sales_data(istream &is)
	{
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price*units_sold;
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
	//测试数据
	//123-123-123 1 15 123-123-123 2 10 123-123-124 1 12
	Sales_data total(cin);
	if (cin)
	{
		Sales_data trans(cin);
		//这里如果cin,那之后还有数据就T,ctrl+z就F,无法正确循环
		//while (cin)
		//这里如果用while会少一组数据
		//while(read(cin,trans))
		do
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}

		} while (read(cin, trans));

		print(cout, total) << endl;
	}

	return 0;
}