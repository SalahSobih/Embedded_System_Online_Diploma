/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void create_pramids_of_numbers(int x);
void main()
{
	int number;
	printf("please inter the integer number to make shape : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	create_pramids_of_numbers(number);
}
void create_pramids_of_numbers(int x)
{
	int i, j;
	for(i=0 ; i<=x ; i++)
	{
		for (j=i ; j<=x ;j++)
			printf("%d ",j);
		printf("\n");
	}
}
