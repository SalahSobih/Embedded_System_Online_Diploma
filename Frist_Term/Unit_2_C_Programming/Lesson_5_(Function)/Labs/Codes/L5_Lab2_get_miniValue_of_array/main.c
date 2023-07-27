/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int getmini(int arr[],int x);
void main()
{
	int i,array[5];
	printf("Please enter 5 integer for array :\n");
	for(i=0 ; i<5 ; i++)
	{
		printf("element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&array[i]);
	}
	printf("Array element is : ");
	for(i=0 ; i<5 ; i++)
			printf("%d \t",array[i]);

	printf("\nminimum element in this array is : %d",getmini(array,5));
}
int getmini(int arr[5],int x)
{
	int i ,mini = arr[0];
	for (i=0 ; i<x ;i++)
		if (arr[i]<mini )
			mini = arr[i];
	return mini;
}
