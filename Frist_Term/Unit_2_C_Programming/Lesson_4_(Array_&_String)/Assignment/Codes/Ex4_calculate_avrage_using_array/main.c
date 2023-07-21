/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float numbers[100];
	float sum=0;
	int i,number_of_data;
	while(1){
		printf("Enter the number of data : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&number_of_data);
		if(number_of_data > 100 || number_of_data < 0)
			printf("Please Enter number from 1 to 100 \n");
		else
			break;
	}
	for (i=1 ; i<=number_of_data ; i++)
	{
		printf("Enter Number %d : ",i);
		fflush(stdin); fflush(stdout);
		scanf("%f",&numbers[i]);
		sum+=numbers[i];
	}
	printf("Average = %0.2f",sum/number_of_data);
}

