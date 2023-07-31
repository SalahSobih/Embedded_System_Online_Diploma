/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void get_decimal(char array[],int x);
int main()
{
	int i;
	char arr[10]="0123456789";
	printf("charcters : ");
	for(i=0;i<10;i++)
		printf("%c ",arr[i]);
	printf("\nIntegers : ");
	get_decimal(arr,10);
}

void get_decimal(char array[],int x)
{
	static int i = 0;
	for(;i<x-1 ; i++)
		printf("%d ",array[i]);
}
