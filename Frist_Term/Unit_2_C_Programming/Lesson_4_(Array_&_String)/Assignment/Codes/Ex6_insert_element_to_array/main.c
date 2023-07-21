/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	int array[100];
	int i,no_of_element,inserted_number,location;
	while(1)
	{
		printf("Please Enter no of elements : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&no_of_element);
		if(no_of_element < 0 || no_of_element > 100)
			printf("Please enter number between 1 to 100 \n");
		else
			break;
	}
	//fill array
	for(i=0 ; i<no_of_element ; i++)
		array[i]=i+1;
	//print array
	for(i=0 ; i<no_of_element ; i++)
		printf("%d \t",array[i]);

	printf("\n Please Enter Element to insert : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&inserted_number);
	printf("\n Please Enter the Element location : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	array[location-1]=inserted_number;
	//print new array after inserting
	for(i=0 ; i<no_of_element ; i++)
		printf("%d \t",array[i]);

}

