#include "function.h"
#include <assert.h>

int SumSqur(int quantity_)
{
	int count = 0;
	int number = 1;
	 int  sum = 0;
	while (count != quantity_) 
	{
		sum = sum + number * number;
		count = count + 1;
		number = number + 1;
		

	}
	return sum;
}
int SqurSum(int quantity_)
{
	int count = 1;
	int number = 1;
	int num = 1;
	 int  sum = 0;
	while (count != quantity_)
	{
		num = num + 1;
		count = count + 1;
		number = number + num;
		
		
	}
	sum = number * number;
	return sum;
}

int Prime(unsigned long long int x)
{
	if (x == 2)
		return 1;
	if (x % 2 == 0)
		return 0;
	for (unsigned int n = 3; n < sqrt((double)x) + 1; n += 2)
		if (x % n == 0)
			return 0;
	return 1;
}

int countPrime(int count_)
{
	assert(count_ > 0);

	if (count_ == 1)
		return 2;
	int x = 1;
	int c = 1;
	while (c != count_)
	{
		if (Prime(x))
		{
			c += 1;
		}
		x += 2;
	}
	return x;
}


