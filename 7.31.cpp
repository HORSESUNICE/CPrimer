//����һ����X,Y,X����һ��ָ��Y��ָ�룬Y����һ������X�Ķ���

//���������٣�����Ҳ�ᱨ��ȱʧ����˵����
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