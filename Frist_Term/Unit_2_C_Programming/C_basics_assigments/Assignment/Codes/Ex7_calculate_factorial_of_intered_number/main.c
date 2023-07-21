/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	int number, i, factorial=1;
	printf("please entre an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	if(number > 0)
	{
		for(i=1 ; i<=number ; i++)
			{
				factorial*=i;
			}
		printf("Factorial = %d\n",factorial);
	}
	else if(number < 0)
		printf("Error!!! factorial of negative number doesn't exsit.\n");
	else
		printf("Factorial = 1\n");

}

