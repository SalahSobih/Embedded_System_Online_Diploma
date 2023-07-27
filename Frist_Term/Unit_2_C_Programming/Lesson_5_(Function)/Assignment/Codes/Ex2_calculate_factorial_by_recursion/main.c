/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int factorial=1;
int calc_factorial(int x);
void main()
{
	int number;
	printf("Please enter integer number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("Factorial of %d = %d",number,calc_factorial(number));
}
int calc_factorial(int x)
{
	if(x==0)
		return factorial;
	factorial *= x;
	x--;
	if(x>1)
		calc_factorial(x);
	return factorial;
}
