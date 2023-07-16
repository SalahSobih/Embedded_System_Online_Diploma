/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float checked_number;
	printf("please entre number check : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&checked_number);

	if(checked_number > 0)
	{
		printf("%f is positive\n",checked_number);
	}
	else if(checked_number < 0)
	{
		printf("%f is negative\n",checked_number);
	}
	else
	{
		printf("you entered Zero \n");
	}
}

