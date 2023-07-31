/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
int get_index(int arr[],int x,int number);
int main()
{
	int i,number,size;
	int arr_numbers[100];
	printf("Pleae Entre Array size (1:100) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	// fill array
	for(i=0 ; i<size ; i++)
	{
		printf("Enter Array element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr_numbers[i]);
	}
	printf("Enter number to get last index of it in the array : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("%d",get_index(arr_numbers,size,number));
}
int get_index(int arr[],int x,int number)
{
	int i,index=-1;
	for(i=0;i<x;i++)
	{
		if(arr[i]==number)
			index=i+1;
	}
	return index;
}

