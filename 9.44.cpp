//编写函数接受三个string参数，s,oldVal,newVal
//使用下标和replace将s中所有oldVal替换为newVal
//测试程序

#include <iostream>
#include <string>

using namespace std;

//使用find函数的版本
string& rep1(string &s, const string &oldVal, const string &newVal)
{
	string::size_type index = 0;
	while (index != s.size())
	{
		index = s.find(oldVal, index);
		//这里要注意find如果没找到指定字符串会返回-1
		//如果不退出循环就出现下标越界的非法操作
		if (index == -1)
			break;
		//s.erase(index, oldVal.size());
		//s.insert(index, newVal);
		s.replace(index, oldVal.size(), newVal);
		index += newVal.size();
	}
	return s;
}

//不使用find函数版本
string& rep2(string &s, const string &oldVal, const string &newVal)
{
	string::size_type index = 0;

	//要将首字母和oldVal匹配判断放到函数体中否则循环依据s[0]执行
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