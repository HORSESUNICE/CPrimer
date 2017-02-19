//定义一对类X,Y,X包含一个指向Y的指针，Y包含一个类型X的对象

//声明不能少，少了也会报错，缺失类型说明符
class Y;

class X
{
private:
	int x;
	Y *yp;
};

class Y
{
private:
	X x;
};

int main()
{
	return 0;
}