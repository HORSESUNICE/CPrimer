//假定有一个名为NoDefault的类，有一个接受一个int的构造函数，没有默认构造函数。定义一个类C，
//有一个NoDefault的类型成员，定义C的默认构造函数

class NoDefault
{
public:
	NoDefault(int i){}
};

class C
{
public:
	//在函数体初始化时不行的，这样会先自动调用默认构造函数，但不存在	
	//C() { n = NoDefault(0); }
	C() :n(0){ }
private:
	NoDefault n;
};

int main()
{
	C c;
	return 0;
}