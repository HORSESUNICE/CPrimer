//使用stack处理括号化表达式
//当看到左括号，记录下来
//左括号后看到有括号，从stack中pop对象，直至遇见左括号，将左括号也一起弹出
//将括号内运算结果push到栈，表示括号表达式处理完毕

#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> vs{ "{","3","+","5","}" };
	//stack<string,vector<string>> js(vs);
	stack<int> st;
	int left, right;
	for (vector<string>::size_type i = 0; i != vs.size(); ++i)
	{
		if (vs[i] == "{")
			left = i;
		if (vs[i] == "}")
			right = i;
	}
	                                                                                                                                                                                                                                                                                                                                                                                      
}