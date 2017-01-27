#include "Chapter6.h"

int fact(int i)
{
	int res = 1;
	for (int j = 2; j != i + 1; ++j)
		res *= j;
	return res;
}