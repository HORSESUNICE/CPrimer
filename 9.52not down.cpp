//ʹ��stack�������Ż����ʽ
//�����������ţ���¼����
//�����ź󿴵������ţ���stack��pop����ֱ�����������ţ���������Ҳһ�𵯳�
//��������������push��ջ����ʾ���ű��ʽ�������

#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vs{ "{","3","+","5","}" };
	//stack<string,vector<string>> js(vs);
	stack<int> st;
	int left, right;
	for (vector<string>::size_type i = 0; i != vs.size(); ++i)
	{
		if (vs[i] == "{")
			left = i;
		if (vs[i] == "}")
			right = i;
	}
	                                                                                                                                                                                                                                                                                                                                                                                      
}