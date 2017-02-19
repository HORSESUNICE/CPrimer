//定义自己的Screen和Window_mgr,clear是w的成员,s的友员

#include <iostream>
#include <string>
#include <vector>

//如果不声明类，友员声明处报错不是类或命名空间
//class Window_mgr;

class Screen;

//!!!类只能定义一次不能这里定义了后面再写class Window_mgr{}
class Window_mgr
{
public:
	//要先定义Screen，否则这里vector<Screen>报错
	//如果把Window_mgr先定义，clear函数可以访问私有成员，但vector报错
	using ScreenIndex = std::vector<Screen>::size_type;
	//这里不能定义因为还没声明友员不能访问Screen
	void clear(ScreenIndex i);
	void print(std::ostream &os);

	//默认构造函数
	Window_mgr();

private:
	//将screens成员在构造函数里面生成,这里是关键
	//std::vector<Screen> screens{ Screen(3,4,'X') };
	//如果只声明未定义Screen，那是可以声明对象的,只要不使用一下关于Screen类的操作
	std::vector<Screen> screens;
	std::vector<Screen> screens;
};

class Screen
{
public:
	//后面在class Window_mgr public别名了ScreenIndex,仍然不可见
	friend void Window_mgr::clear(ScreenIndex i);
	friend void Window_mgr::print(std::ostream &os);
	//直接定义友员类可以正确编译
	//friend class Window_mgr;

	typedef std::string::size_type sst;

	//构造函数
	Screen() = default;
	Screen(sst ro, sst co, char c) :row(ro), col(co), contents(row*col, c) {}

private:
	sst row = 0;
	sst col = 0;
	std::string contents;
	sst cursor = 0;
	void doDisplay(std::ostream &os) const { os << contents; }
};

Window_mgr::Window_mgr() { screens.push_back(Screen(3, 4, 'X')); }

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	//这里我已经声明了友员为什么还是不能访问Screen的私有成员
	s.contents = std::string(s.row*s.col, ' ');
}

void Window_mgr::print(std::ostream &os)
{
	Screen &s = screens[0];
	os << s.contents << std::endl;
}

int main()
{
	Window_mgr w;
	w.print(std::cout);
	w.clear(0);
	w.print(std::cout);

	return 0;
}