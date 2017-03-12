//�޸�8.6�ĳ��򽫽������һ���ļ��У������������Ϊ�ڶ����������ݸ�main

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
	//���ڳ�Ա����Ĭ��inline�����ⶨ��ʱ��inline�������ü�
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
//��Sale_data�Ѿ�����ͷ�ļ�
//#include <iostream>
//#include <string>
#include <fstream>

//��������
//C:/Users/mayangbin/win10/iostream/book.txt

int main(char *argv[], int argc)
{
	//���ӱ����޷��ɹ�
	if (argc != 3)
	{
		cout << "Error file name!" << endl;
		return -1;
	}

	ifstream f(argv[1]);
	ofstream w(argv[2]);
	Sales_data total;
	if (read(f, total)) {
		Sales_data trans;
		while (read(f, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(w, total) << endl;
				total = trans;
			}
		}
		print(w, total) << endl;
	}
	else {
		cerr << "No data?!" << endl;
	}

	return 0;
}