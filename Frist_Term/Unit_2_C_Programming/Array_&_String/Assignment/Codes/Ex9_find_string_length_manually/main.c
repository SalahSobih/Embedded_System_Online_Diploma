/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "string.h"
void main()
{
	char entred_string[100];
	int i,counter;
	printf("Please enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(entred_string);
	for (i=0 ; i<100 ; i++)
		if(entred_string[i] != 0)
			counter++;
		else
			break;
	printf("Length of String : %d",counter);
}

