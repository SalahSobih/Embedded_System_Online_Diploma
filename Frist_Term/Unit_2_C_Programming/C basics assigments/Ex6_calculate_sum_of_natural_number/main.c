/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	int number, i, sum=0;
	printf("please entre an integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	for(i=1 ; i<=number ; i++)
	{
		sum+=i;
	}
	printf("sum = %d \n",sum);
}

