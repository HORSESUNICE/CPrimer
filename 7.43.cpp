//�ٶ���һ����ΪNoDefault���࣬��һ������һ��int�Ĺ��캯����û��Ĭ�Ϲ��캯��������һ����C��
//��һ��NoDefault�����ͳ�Ա������C��Ĭ�Ϲ��캯��

class NoDefault
{
public:
	NoDefault(int i){}
};

class C
{
public:
	//�ں������ʼ��ʱ���еģ����������Զ�����Ĭ�Ϲ��캯������������	
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