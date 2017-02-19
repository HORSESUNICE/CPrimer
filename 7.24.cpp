//给Screen类添加三个构造函数：一个默认构造函数；一个构造函数接受宽和高，将contents初始化成给定数量空白；第三接受宽高和一个字符将字符作为屏幕内容

//编写你自己的Screen类
#include <iostream>
#include <string>

class Screen
{
public:
	typedef std::string::size_type sst;

	//构造函数
	Screen() = default;
	Screen(sst ro, sst co) :row(ro), col(co), contents(row*col, ' ') {}
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