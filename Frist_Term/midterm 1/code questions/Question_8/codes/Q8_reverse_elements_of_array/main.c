/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void reverse_array(int a[],int s);
void main()
{
	int arr[100];
	int size,i;
	printf("Please Enter array size : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	//fill array
	for(i=0 ; i<size ; i++)
	{
		printf("Please Enter element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	//print array
	printf("intput array  : ");
	for(i=0 ; i<size ; i++)
		printf("%d  ",arr[i]);
	//reverse array
	printf("\nreverse array : ");
	reverse_array(arr,size);
}

void reverse_array(int a[],int s)
{
	int i;
	for(i=s ; i>0 ; i--)
		printf("%d  ",a[i-1]);
}
