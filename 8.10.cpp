//��д���������ļ����б�����vector<string>��
//ʹ��һ��istringstream��vector��ȡ���ݣ�ÿ�ζ�ȡһ������

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream bookin("C:/Users/mayangbin/win10/iostream/book.txt");
	vector<string> v;
	cout << v.size() << endl;

	//����д������һ������
	//ԭ��û������
	//��ȡstringstream������geiline���ж�����
	//while (bookin)
	//{
	//	string s;
	//	getline(bookin, s);
	//	v.push_back(s);
	//}
	//cout << v[5] << endl;

	string s;
	while (getline(bookin, s))
	{
		v.push_back(s);
	}
	bookin.close();

	cout << v.size() << endl;
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		istringstream is(*it);
		string word;
		while (is >> word)
			cout << word << " ";
		cout << endl;
	}
}