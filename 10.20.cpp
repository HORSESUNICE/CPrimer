//��׼�ⶨ����һ��count_if,ʹ����ͳ�Ƴ����ж��ٵ��ʳ��ȳ���6

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> vs{ "the","quick","red","fox","jumps","over","the","slow","red","turtle" };
	cout << count_if(vs.begin(), vs.end(), [](const string &s) {return s.size() > 6; }) << endl;
}