//��д7.1.1�����򣬴�һ���ļ���ȡ���׼�¼�����ļ�����Ϊ�������ݸ�main

#include "Sale_data.h"
//��Sale_data�Ѿ�����ͷ�ļ�
//#include <iostream>
//#include <string>
#include <fstream>

//��������
//C:/Users/mayangbin/win10/iostream/book.txt

int main(char *argv[], int argc)
{
	//���ӱ����޷��ɹ�
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