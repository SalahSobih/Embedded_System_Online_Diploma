/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int unique_number(int a[], int s);
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
	printf("intput array : ");
	for(i=0 ; i<size ; i++)
		printf("%d  ",arr[i]);
	//unique number
	printf("\nunique number is : %d",unique_number(arr,size));
}
int unique_number(int a[], int s)
{
	int i,j,flag=0 ;
	for(i=0; i<s ; i++)
	{
		for(j=0; j<s ; j++)
		{
			if (i==j)
				continue;
			else if (a[i]==a[j])
			{
				flag=0;
				break;
			}
			else
				flag=1;
		}
		if (flag == 0)
			continue;
		else
			break;
	}
	return a[i];
}
