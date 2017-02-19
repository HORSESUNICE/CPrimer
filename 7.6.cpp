//�����Լ��汾��add��read��print

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
	Sales_data s = s1;//�������������ǵײ�const������constû��ϵ
	s.combine(s2);//Ϊ�˿���ʹ��combine����Ҫ��֮ǰ��combine�βζ���ĳ�const
	return s;
}

istream & read(istream &is, Sales_data &s)
{
	is >> s.bookNo >> s.units_sold;
	s.revenue = 10 * s.units_sold;
	return is;
}

ostream & print(ostream &io, const Sales_data &s)//�����s�ĳ�constҪ��isbn��Ϊconst��Ա����
{
	io << s.isbn() << " " << s.units_sold << " " << s.revenue;
	return io;
}

int main()
{
	Sales_data s1, s2, s;
	//const Sales_data s1;
	//Sales_data s2;

	//combine()�����������µĲ����ǿ��е�
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
	
	//��������
	//123-123-123 1 123-123-123 2

	return 0;
}