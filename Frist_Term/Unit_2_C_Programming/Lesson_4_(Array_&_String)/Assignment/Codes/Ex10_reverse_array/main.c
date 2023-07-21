/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "String.h"
void main()
{
	char entred_string[100];
	char reversed_string[100];
	int i,length;
	printf("Please enter the string to reverse : ");
	fflush(stdin); fflush(stdout);
	gets(entred_string);
	length = strlen(entred_string);
	for (i=0 ; i<length ; i++)
		reversed_string[i]= entred_string[length-i-1];

	reversed_string[length]=0;
	printf("Reverse String is : %s",reversed_string);
}

