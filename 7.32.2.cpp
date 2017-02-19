//CSDN 	pengzhixi大神提供的解决方案，谢谢！
std::vector<Screen> screens;

#include <iostream>
#include <string>
#include <vector>

class Screen;
class Window_mgr
{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex i);
	Window_mgr();
private:
	std::vector<Screen> screens;
};

class Screen
{
public:
	friend void Window_mgr::clear(ScreenIndex i);
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


void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	s.contents = std::string(s.row*s.col, ' ');
}
Window_mgr::Window_mgr() { screens.push_back(Screen(24, 80, ' ')); }

int main()
{
	return 0;

}