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
	char entred_string [100];
	char c;
	int i,counter;
	printf("Please enter the string : ");
	fflush(stdin); fflush(stdout);
	gets(entred_string);
	printf("Please enter the character to find frequency : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	for(i=0 ; i<strlen(entred_string) ; i++)
	{
		if (entred_string[i]==c)
			counter++;
	}
printf("Frequency of %c = %d",c,counter);


}

