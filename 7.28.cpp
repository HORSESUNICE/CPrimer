//如果move、set、display函数返回类型是Screen不是Screen&，7.27会怎么样

#include <iostream>
#include <string>

class Screen
{
public:
	typedef std::string::size_type sst;

	//构造函数
	Screen() = default;
	Screen(sst ro, sst co, char c) :row(ro), col(co), contents(row*col, c) {}

	//成员函数
	char get() { return contents[cursor]; }
	char get(sst ro, sst co) { return contents[ro*col + co]; }
	Screen move(sst ro, sst co) { cursor = ro*col + co; return *this; }
	Screen set(sst ro, sst co, char c) { contents[ro*col + co] = 'c'; return *this; }
	//这里不能设置为'c'这样改变contents内容有问题
	//Screen &set(char c) { contents[cursor] = 'c'; return *this; }
	Screen set(char c) { contents[cursor] = c; return *this; }
	//让display()后续可以继续执行函数将返回值设置为引用
	Screen display(std::ostream &os) { doDisplay(os); return *this; }
	const Screen &display(std::ostream &os) const { doDisplay(os); return *this; }


	void print() {
		std::cout << "row : " << row << std::endl << "col : " << col << std::endl << "cursor : " << cursor << std::endl << contents << std::endl;
	}
private:
	sst row = 0;
	sst col = 0;
	std::string contents;
	sst cursor = 0;
	//要类常量非常量都可以使用这个函数，设置为const成员函数，类内是默认inline无额外调用开销
	void doDisplay(std::ostream &os) const { os << contents; }
};

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.print();
	//set改变的是temp对象，myScreen不变
	//move真实影响了myScreen
	myScreen.move(4, 0).set('#').display(std::cout);
	std::cout << '\n';
	myScreen.print();
	myScreen.display(std::cout);
	std::cout << '\n';

	return 0;
}