//��дmain���������ܱ���ѡ�������ݸ�main��ʵ������

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	//argv�ǲ����÷�Χfor�ģ�ȱʧ������

	//����汾�������Ǻܺ�
	//for (decltype (sizeof(argv))i=0;i!= sizeof(argv)/sizeof(argv[0]);++i)
	//	cout << argv[i] << " ";
	//cout << endl;

	//����argc
	for (int i = 0; i != argc; ++i)
		cout << argv[i] << " ";
	cout << endl;

	return 0;
}