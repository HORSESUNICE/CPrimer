//�޸�8.6�ĳ��򽫽������һ���ļ��У������������Ϊ�ڶ����������ݸ�main

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