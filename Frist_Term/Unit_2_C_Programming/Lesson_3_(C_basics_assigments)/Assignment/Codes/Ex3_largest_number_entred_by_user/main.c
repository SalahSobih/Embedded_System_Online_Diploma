/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float n1, n2, n3;
	printf("please entre 3 numbers to get latgest value \n");
	printf("entre first number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n1);
	printf("entre second number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n2);
	printf("entre thrid number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&n3);
	if(n1>n2 && n1>n3)
	{
		printf("largest number is : %f",n1);
	}
	else if(n2>n1 && n2>n3)
	{
		printf("largest number is : %f",n2);
	}
	else
	{
		printf("largest number is : %f",n3);
	}
}

