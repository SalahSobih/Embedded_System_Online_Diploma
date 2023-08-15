/*
 * main.c

 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int count_ones(int n);
void main ()
{
	int number;
	printf("please Enter the number to count ones : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("number of ones : %d",count_ones(number));
}
int count_ones(int n)
{
	int i ,result=0 , test_number;
	for (i=0 ; i<32 ; i++)
	{
		test_number = n & ~(1<<i);
		if(test_number != n)
			result++;
	}
	return result;
}

