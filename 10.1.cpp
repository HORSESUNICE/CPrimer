//��д��������count��������ȡint����vector����ӡ�ж��ٸ�Ԫ��ֵ���ڸ���ֵ

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	vector<int> vi;
	string s;
	//cin�����հ׾���ֹ����
	//cin >> s;
	getline(cin, s);
	int num;
	cin >> num;

	int n;
	istringstream is(s);
	while (is >> n)
		vi.push_back(n);

	cout << num << " occurs " << count(vi.begin(), vi.end(), num) << " times!" << endl;
}