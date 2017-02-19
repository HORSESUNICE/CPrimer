//ʹ��istream���캯����д229����

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
	Sales_data &combine(const Sales_data &anothers);
	string isbn() const;

	//���캯��
	Sales_data() = default;
	//�����n��p��������Ϊconst����
	//Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s, const unsigned n, const double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s) :bookNo(s) {}
	//���캯���������������ⶨ��
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
	//��������
	//123-123-123 1 15 123-123-123 2 10 123-123-124 1 12
	Sales_data total(cin);
	if (cin)
	{
		Sales_data trans(cin);
		//�������cin,��֮�������ݾ�T,ctrl+z��F,�޷���ȷѭ��
		//while (cin)
		//���������while����һ������
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