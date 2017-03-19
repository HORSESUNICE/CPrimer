//编写compareIsbn比较两个Sales_data的isbn(),用来排序一个vector<Sales_data>

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Sales_data {
	friend istream & read(istream &is, Sales_data &s);
	friend ostream & print(ostream &io, const Sales_data &s);

private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
public:
	string isbn() const;
};

string Sales_data::isbn() const {
	return bookNo;
}

bool compareIsbn(const Sales_data &s1, const Sales_data &s2)
{
	return s1.isbn() < s2.isbn();
}

int main()
{
	vector<Sales_data> vs;
	sort(vs.begin(), vs.end(), compareIsbn);
}