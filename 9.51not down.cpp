//���һ���࣬����unsigned��Ա��������
//Ϊ���д���캯�������ܱ�ʾ���ڵ�string����
//���캯��Ӧ���ܴ���ͬ���ݸ�ʽ
//��Jan 1,1900�� 1/1/1990�� Jan 1 1990

//������ϸд����д�ķǳ�����
//��ʱ��дһ���򵥰汾

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cal
{
public:
	cal(const string &s)
	{
		int size = 0;
		if (s.find(',') != string::npos)
			size = 1;
		else if (s.find('/') != string::npos)
			size = 2;
		else
			size = 3;
		switch (size)
		{
		case 1:
			year = s.substr(6, 4);
			month = s.substr(0, 3);
			day= s.substr(0, 3);

		}
	}

private:
	string year;
	string month;
	string day;
};

int main()
{

}