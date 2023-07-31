/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
void swap_arrays(int arr_1[],int x,int arr_2[],int y);
int main()
{
	int i,size_1,size_2;
	int arr_1[30], arr_2[30];
	printf("Pleae Entre Array 1 size (1:50) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size_1);
	printf("Pleae Entre Array 2 size (1:50) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size_2);
	// fill array 1
	for(i=0 ; i<size_1 ; i++)
	{
		printf("Array 1 : Enter element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr_1[i]);
	}
	// fill array 2
	for(i=0 ; i<size_2 ; i++)
	{
		printf("Array 2 : Enter element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr_2[i]);
	}
	// print Two arrays before the swaping
	printf("Array_1 before swaping ==> ");
	for(i=0;i<size_1;i++)
		printf("%d ",arr_1[i]);
	printf("\nArray_2 before swaping ==> ");
	for(i=0;i<size_2;i++)
		printf("%d ",arr_2[i]);
	// swaping arrays
	swap_arrays(arr_1,size_1,arr_2,size_2);
}
void swap_arrays(int arr_1[],int x,int arr_2[],int y)
{
	int temp ,i,big_size;
	if (x>=y)
		big_size=x;
	else
		big_size=y;
	for(i=0;i<big_size;i++)
	{
		temp = arr_1[i];
		arr_1[i] = arr_2[i];
		arr_2[i] = temp;
	}
	printf("\n========================================");
	printf("\nArray_1 after swaping : ");
	for(i=0;i<y;i++)
		printf("%d ",arr_1[i]);
	printf("\nArray_2 after swaping : ");
	for(i=0;i<x;i++)
		printf("%d ",arr_2[i]);
}

