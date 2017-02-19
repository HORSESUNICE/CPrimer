//�����Լ���Screen��Window_mgr,clear��w�ĳ�Ա,s����Ա

#include <iostream>
#include <string>
#include <vector>

//����������࣬��Ա��������������������ռ�
//class Window_mgr;

class Screen
{
public:
	//������class Window_mgr public������ScreenIndex,��Ȼ���ɼ�
	//friend void Window_mgr::clear(ScreenIndex i);
	//ֱ�Ӷ�����Ա�������ȷ����
	friend class Window_mgr;

	typedef std::string::size_type sst;

	//���캯��
	Screen() = default;
	Screen(sst ro, sst co, char c) :row(ro), col(co), contents(row*col, c) {}

private:
	sst row = 0;
	sst col = 0;
	std::string contents;
	sst cursor = 0;
	void doDisplay(std::ostream &os) const { os << contents; }
};

//!!!��ֻ�ܶ���һ�β������ﶨ���˺�����дclass Window_mgr{}
class Window_mgr
{
public:
	//Ҫ�ȶ���Screen����������vector<Screen>����
	//�����Window_mgr�ȶ��壬clear�������Է���˽�г�Ա����vector����
	using ScreenIndex = std::vector<Screen>::size_type;
	//���ﲻ�ܶ�����Ϊ��û������Ա���ܷ���Screen
	void clear(ScreenIndex i);
	void print(std::ostream &os)
	{
		Screen &s = screens[0];
		os << s.contents << std::endl;
	}

private:
	std::vector<Screen> screens{ Screen(3,4,'X') };
};

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];
	//�������Ѿ���������ԱΪʲô���ǲ��ܷ���Screen��˽�г�Ա
	s.contents = std::string(s.row*s.col, ' ');
}

int main()
{
	Window_mgr w;
	w.print(std::cout);
	w.clear(0);
	w.print(std::cout);

	return 0;
}