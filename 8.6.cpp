//重写7.1.1书店程序，从一个文件读取交易记录，将文件名作为参数传递给main

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
	if (argc != 2)
	{
		cout << "Error file name!" << endl;
		return -1;
	}

	ifstream f(argv[1]);
	Sales_data total;
	if (read(f, total)) {
		Sales_data trans;
		while (read(f, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else {
		cerr << "No data?!" << endl;
	}

	return 0;
}