/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main()
{
	int x,y;
	printf("enter two integer \n");
	printf("First number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("Second number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&y);
	printf("Sum : %d",x+y);
}
