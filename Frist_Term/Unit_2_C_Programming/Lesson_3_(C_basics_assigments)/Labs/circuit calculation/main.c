/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main()
{
	float r;
	char c;
	float result;
	printf("Please enter radus : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r );
	printf("Please select  (a for area , c for circumference) : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c );

	if (c == 'a')
	{
		result = 3.14*r*r;
		printf("area = %f", result);
	}
	else if (c == 'c')
	{
		result = 2*3.14*r;
		printf("circumference = %f",result);
	}
	else
	{
		printf("wrong choice");
	}
}
