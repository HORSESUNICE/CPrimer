//��д������������string������s,oldVal,newVal
//ʹ���±��replace��s������oldVal�滻ΪnewVal
//���Գ���

#include <iostream>
#include <string>

using namespace std;

//ʹ��find�����İ汾
string& rep1(string &s, const string &oldVal, const string &newVal)
{
	string::size_type index = 0;
	while (index != s.size())
	{
		index = s.find(oldVal, index);
		//����Ҫע��find���û�ҵ�ָ���ַ����᷵��-1
		//������˳�ѭ���ͳ����±�Խ��ķǷ�����
		if (index == -1)
			break;
		//s.erase(index, oldVal.size());
		//s.insert(index, newVal);
		s.replace(index, oldVal.size(), newVal);
		index += newVal.size();
	}
	return s;
}

//��ʹ��find�����汾
string& rep2(string &s, const string &oldVal, const string &newVal)
{
	string::size_type index = 0;

	//Ҫ������ĸ��oldValƥ���жϷŵ��������з���ѭ������s[0]ִ��
	//while (index!=s.size()&&s[index] == oldVal[0])
	while (index != s.size())
	{
		if (s[index] == oldVal[0])
		{
			string::size_type check = 0;
			while (check != oldVal.size() && s[index + check] == oldVal[check])
				++check;
			if (check == oldVal.size())
			{
				//s.erase(index, oldVal.size());
				//s.insert(index, newVal);
				s.replace(index, oldVal.size(), newVal);
			}
		}

		//index += newVal.size();
		++index;
	}
	return s;
}

int main()
{
	string s("hi hi hi hahaha hahaha hi hi");
	//rep1(s, "hahaha", "2333");
	rep2(s, "hahaha", "2333");
	cout << s << endl;
}