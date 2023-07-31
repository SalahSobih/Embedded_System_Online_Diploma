/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
void reverse_array(int array[],int x);
int main()
{
	int i,size;
	int arr[50];
	printf("Pleae Entre Array size (1:50) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	// fill array
	for(i=0 ; i<size ; i++)
	{
		printf("Enter Array element %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Normal Array : ");
	for(i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\nRevese Array : ");
	reverse_array(arr,size);
}

void reverse_array(int array[],int x)
{
	if(x>0)
	{
		printf("%d ",array[x-1]);
		reverse_array(array,x-1);
	}
}
