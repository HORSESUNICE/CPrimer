//��д�������Զ�ģʽ���ļ��������ݶ��뵽һ��string��vector�У���ÿһ����Ϊһ������Ԫ�ش���vector��

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> v;
	std::string s;

	std::ifstream f("C:/Users/mayangbin/win10/iostream/hello.txt");
	std::ifstream ifs;

	//���һ�ж�ȡ�����Ϊeof,��������һ��
	//��������Ӧ�����һ�ж�ȡ��ʱ��eofΪ0ѽ?
	//ֻҪ���������������ͻὫ״̬��ΪEOF����������λǰ�Ĳ����Ƿ�ɹ�
	//��getline������ȡ�ļ������һ�У������һ������Ϊ������EOF��������
	//��ôgetline�����ǳɹ��ģ���eof���ǻ���λ
	//Ҫô�ļ����ӻس���������getlineΪ�ж�����
	//http://blog.csdn.NET/yah99_wolf/article/details/5961998
	//while (!getline(f, s).eof())
	while (getline(f, s))
		v.push_back(s);

	f.close();
	
	for (auto i = v.begin(); i != v.end(); i++)
		std::cout << *i << std::endl;

	return 0;
}