/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int sum_digits(int n);
void main ()
{
	int number;
	printf("please Enter the number to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("digits sum = %d",sum_digits(number));
}
int sum_digits(int n)
{
	 int i,result=0;
	while (1)
	{
	    if(n==0)
	        break;
	    else
	    {
	        i = n%10;
	        n /= 10;
	        result += i;
	    }
	 }
	return result;
}
