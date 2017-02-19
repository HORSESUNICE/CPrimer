//编写你自己的Screen类
#include <iostream>
#include <string>

class Screen
{
public:
	typedef std::string::size_type sst;
	
	//构造函数
	Screen() = default;
	//重名也可以正确辨认实参和形参
	//Screen(sst row,sst col,char c):row(row),col(col),contents(row*col,c){}
	Screen(sst ro, sst co, char c) :row(ro), col(co), contents(row*col, c) {}

	//成员函数
	char get() { return contents[cursor]; }
	char get(sst ro, sst co) { return contents[ro*col + co]; }
	Screen &move(sst ro, sst co) { cursor = ro*col + co; return *this; }
	void print() {
		std::cout << "row : " << row << std::endl << "col : " << col << std::endl << "cursor : " << cursor << std::endl << contents << std::endl;
	}
private:
	sst row = 0;
	sst col = 0;
	std::string contents;
	sst cursor = 0;
};

int main()
{
	Screen s(3, 4, 'i');
	s.print();
	s.move(1, 2);
	s.print();

	return 0;
}