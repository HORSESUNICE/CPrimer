//向Sales_data类添加combine和isbn成员

#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
	Sales_data &combine(Sales_data &anothers);
	string isbn();
};

Sales_data & Sales_data::combine(Sales_data &anothers) {
	this->units_sold += anothers.units_sold;
	this->revenue += anothers.revenue;
	return *this;
}

string Sales_data::isbn() {
	return bookNo;
}

int main()
{

}