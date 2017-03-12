//编写函数，以读模式打开文件，将内容读入到一个string的vector中，将每一行作为一个独立元素存在vector中

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> v;
	std::string s;

	std::ifstream f("C:/Users/mayangbin/win10/iostream/hello.txt");
	std::ifstream ifs;

	//最后一行读取完后流为eof,输出结果少一行
	//但按道理应该最后一行读取的时候eof为0呀?
	//只要遇到结束符，流就会将状态置为EOF，而不管置位前的操作是否成功
	//用getline函数读取文件的最后一行，如果这一行是因为遇到了EOF而结束的
	//那么getline操作是成功的，但eof还是会置位
	//要么文件最后加回车，或者以getline为判断条件
	//http://blog.csdn.NET/yah99_wolf/article/details/5961998
	//while (!getline(f, s).eof())
	while (getline(f, s))
		v.push_back(s);

	f.close();
	
	for (auto i = v.begin(); i != v.end(); i++)
		std::cout << *i << std::endl;

	return 0;
}