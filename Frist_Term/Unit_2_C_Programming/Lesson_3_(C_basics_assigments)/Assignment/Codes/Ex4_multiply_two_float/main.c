/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main()
{
	float x,y;
	printf("enter two float \n");
	printf("First number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf("Second number : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);
	printf("Sum : %f",x*y);
}

