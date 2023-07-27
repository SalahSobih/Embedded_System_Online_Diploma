/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int calc_factorial(int x);
void main()
{
	int number;
	printf("Please inter the number to calculate its factorial : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("facatorial of %d is %d",number , calc_factorial(number));
}
int calc_factorial(int x)
{
	int i, factorial=1;
	for(i=x ; i>1 ; i--)
	{
		factorial *=i;
	}
	return factorial;
}

