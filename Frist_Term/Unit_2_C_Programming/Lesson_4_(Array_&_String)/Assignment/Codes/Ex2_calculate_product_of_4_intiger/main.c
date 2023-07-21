/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	int i, number, product=1;
	for (i=1 ; i<=4 ; i++)
	{
		printf("Enter number %d : ",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",&number);
		if (number == 0)
		{
			printf("You entred Zero please enter integer number \n");
			i--;
			continue;
		}
		else
			product *=number;
	}
	printf("product is %d",product);
}
