//���move��set��display��������������Screen����Screen&��7.27����ô��

#include <iostream>
#include <string>

class Screen
{
public:
	typedef std::string::size_type sst;

	//���캯��
	Screen() = default;
	Screen(sst ro, sst co, char c) :row(ro), col(co), contents(row*col, c) {}

	//��Ա����
	char get() { return contents[cursor]; }
	char get(sst ro, sst co) { return contents[ro*col + co]; }
	Screen move(sst ro, sst co) { cursor = ro*col + co; return *this; }
	Screen set(sst ro, sst co, char c) { contents[ro*col + co] = 'c'; return *this; }
	//���ﲻ������Ϊ'c'�����ı�contents����������
	//Screen &set(char c) { contents[cursor] = 'c'; return *this; }
	Screen set(char c) { contents[cursor] = c; return *this; }
	//��display()�������Լ���ִ�к���������ֵ����Ϊ����
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
	//Ҫ�ೣ���ǳ���������ʹ���������������Ϊconst��Ա������������Ĭ��inline�޶�����ÿ���
	void doDisplay(std::ostream &os) const { os << contents; }
};

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.print();
	//set�ı����temp����myScreen����
	//move��ʵӰ����myScreen
	myScreen.move(4, 0).set('#').display(std::cout);
	std::cout << '\n';
	myScreen.print();
	myScreen.display(std::cout);
	std::cout << '\n';

	return 0;
}