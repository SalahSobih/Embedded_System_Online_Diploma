/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "String.h"
void main ()
{
	float number,sum=0;
	int counter=0,max_number_of_input;
	printf("Please Enter max number of input : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&max_number_of_input);
	while (counter < max_number_of_input)
	{
		printf("Enter positive number to calculate avrage Enter negative number to stop : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&number);
		if(number >=0)
		{
			sum +=number;
			counter++;
		}
		else
			break;
	}
	printf("the avrage is : %0.2f",sum/counter);
}

