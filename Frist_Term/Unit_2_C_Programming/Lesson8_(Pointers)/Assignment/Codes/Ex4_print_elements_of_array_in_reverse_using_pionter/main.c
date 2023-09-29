/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include<stdio.h>

int main()
{
	int arr[15];
	int* pa = arr;
	int i,n;
	printf("Enter the nubmer of elelments to store in the array (MAX 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	printf("Enter %d number of elements in the array : \n",n);
	for(i=0 ; i<n ;i++)
	{
		printf("element (%d) : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&pa[i]);
	}

	printf("The elements of array in reverse order are : \n");
		for(i=n-1 ; i>=0 ;i--)
			printf("element (%d) : %d\n",i+1,pa[i]);

	return 0;
}


