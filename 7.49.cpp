//�޸�Sales_data������ʵ��ϸ�ڣ�֮ǰ����Sales_data�����ĳ���Ӧ�ÿ��Լ���ʹ�ã����±���ʹ֮��������

#include <iostream>
#include <string>

using namespace std;

class Sales_data {
	friend istream & read(istream &is, Sales_data &s);
	friend ostream & print(ostream &io, const Sales_data &s);
	//friend Sales_data add(const Sales_data &s1, const Sales_data &s2);
	//add����û��ֱ�ӷ�����˽�г�Ա�����Բ�������Ա

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
public:
	//��������Ϊconst�Ϳ�����ʽ��ת��
	//Sales_data &combine(const Sales_data &anothers);
	Sales_data &combine(Sales_data &anothers);
	string isbn() const;

	Sales_data(const string &s, const unsigned n, const double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(const string &s) :bookNo(s) {}
	Sales_data(istream &is);
};

//Sales_data & Sales_data::combine(const Sales_data &anothers) {
Sales_data & Sales_data::combine(Sales_data &anothers) {
	this->units_sold += anothers.units_sold;
	this->revenue += anothers.revenue;
	return *this;
}

string Sales_data::isbn() const {
	return bookNo;
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
	Sales_data s1("123-123-123", 1, 15);
	string s("123-123-123");
	Sales_data s2(s);
	//7.49.a
	//Sales_data &combine(Sales_data);
	//��ȷִ��
	//7.49.b
	//��const���ò���ָ����ʱ����
	//s1.combine(s);
	s1.combine(s2);
	//7.49.c
	//Sales_data &combine(const Sales_data) const;
	//combine��Ҫ�ı��Ա��������Ϊconst��Ա����

	print(cout, s1) << endl;
	return 0;
}