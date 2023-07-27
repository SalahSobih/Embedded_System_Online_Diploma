/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "String.h"
void main ()
{
	int arr_of_numbers [1000];
	int i , counter=0;
	for (i=0 ; i<1000 ; i++)
		arr_of_numbers[i] = rand();

	for (i=1 ; i<999 ; i++)
		if (arr_of_numbers[i] > arr_of_numbers[i-1] && arr_of_numbers[i] > arr_of_numbers[i+1])
			counter++;
	printf("number of number which has right condition is %d \n",counter);

}
