//��д������һ��vector<string>��Ԫ�ض���ʾ����
//����vector������Ԫ�صĺ͡�
//�޸ĳ���ʹ֮���㸡��string�ĺ�

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> v;
	string s;
	//int sum = 0;
	double sum = 0;
	for (int i = 0; i != 3; ++i)
	{
		cin >> s;
		v.push_back(s);
		//sum += stoi(v[i]);
		sum += stod(v[i]);
	}

	cout << sum << endl;
}