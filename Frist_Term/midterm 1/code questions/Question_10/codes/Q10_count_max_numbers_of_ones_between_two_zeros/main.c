/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int max_ones(int n);
void main ()
{
	int number;
	printf("please Enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("max number of ones between two zeros is : %d",max_ones(number));
}
int max_ones(int n)
{
	int i ,max=0 ,result =0, test_number;
	for (i=0 ; i<32 ; i++)
	{
		test_number = n & ~(1<<i);
		if(test_number != n)
		{
			max++;
			if(result<max)
				result = max;
		}
		else
			max=0;
	}
	return result;
}
