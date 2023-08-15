/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "stdlib.h"
void reverse_digits(int n);
void main ()
{
	int number;
	printf("please Enter the number to reverse : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("revesed digit : ");
	reverse_digits(number);
}
void reverse_digits(int n)
{
	int i;
	if(n>0)
	{
		i = n%10;
		printf("%d",i);
		reverse_digits(n/10);
	}
}
