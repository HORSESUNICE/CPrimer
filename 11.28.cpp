//对一个string到int的vector的map，定义并初始化一个变量来保存在其上调用find返回的结果

#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<int>> m;
	map<string, vector<int>>::iterator it = m.find("hello");
}