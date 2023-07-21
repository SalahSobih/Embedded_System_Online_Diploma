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
	int i,no_of_element,searched_number,location=0;
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
		array[i]=(i+1)*11;
	//print array
	for(i=0 ; i<no_of_element ; i++)
		printf("%d \t",array[i]);

	printf("\n Please Enter the Element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&searched_number);

	for (i=0 ; i<no_of_element ; i++)
		if (array[i] == searched_number)
			location=i+1;
	if (location > 0 )
		printf("The Number found at location %d",location);
	else
		printf("Sorry, The Number is Not found");
}

