/*
 * man.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main()
{
	int checked_number ;
	printf("Enter an integer you want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&checked_number);
	if (checked_number%2 == 0)
	{
		printf("%d is even",checked_number);
	}
	else
	{
		printf("%d is odd",checked_number);
	}
}
