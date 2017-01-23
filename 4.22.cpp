//分别用条件运算符和ifelse划分成绩
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int st[4]{ 99,40,66,77 };
	string grade;
	cout << "version 1:" << endl;
	for (auto g : st)
	{
		grade=(g>90)?"high pass":
									(g>75)?"pass":
														(g > 60) ? "low pass" : "fail";
		cout << grade << endl;
	}

	cout << endl;

	cout << "version 2:" << endl;
	for (auto g : st)
	{
		if (g > 90)
			grade = "high pass";
		else if (g > 75)
			grade = "pass";
		else if (g > 60)
			grade = "low pass";
		else
			grade = "fail";
		cout << grade << endl;
	}

	return 0;
}