//修改8.6的程序将结果报错到一个文件中，将输出名字作为第二个参数传递给main

#include "Sale_data.h"
//在Sale_data已经包含头文件
//#include <iostream>
//#include <string>
#include <fstream>

//输入数据
//C:/Users/mayangbin/win10/iostream/book.txt

int main(char *argv[], int argc)
{
	//不加编译无法成功
	if (argc != 3)
	{
		cout << "Error file name!" << endl;
		return -1;
	}

	ifstream f(argv[1]);
	ofstream w(argv[2]);
	Sales_data total;
	if (read(f, total)) {
		Sales_data trans;
		while (read(f, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(w, total) << endl;
				total = trans;
			}
		}
		print(w, total) << endl;
	}
	else {
		cerr << "No data?!" << endl;
	}

	return 0;
}