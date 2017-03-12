                                                  //编写函数接受三个string参数，s,oldVal,newVal
//使用迭代器及insert和erase将s中所有oldVal替换为newVal
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
		s.erase(index, oldVal.size());
		s.insert(index, newVal);
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
				s.erase(index, oldVal.size());
				s.insert(index, newVal);
			}
		}

		//index += newVal.size();
		++index;
	}
	return s;
}

//不使用find函数版本
//使用iterator
//iterator写起来实在太麻烦了
string& rep3(string &s, const string &oldVal, const string &newVal)
{
	//index为迭代器
	auto index = s.begin();

	while (index != s.end())
	{
		auto indexJudge = index;
		auto indexOld = oldVal.begin();
		if (*index == *indexOld)
		{
			while (indexOld != oldVal.end() && *indexJudge == *indexOld)
			{
				++indexJudge;
				++indexOld;
			}
			if (indexOld == oldVal.end())
			{
				index=s.erase(index, indexJudge);
				//string没有下面的插入操作
				//P324
				//s.insert(index, newVal);
				index=s.insert(index, newVal.begin(),newVal.end());
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
	//rep2(s, "hahaha", "2333");
	rep3(s, "hahaha", "2333");
	cout << s << endl;
}