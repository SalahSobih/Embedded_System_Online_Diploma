/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	char checked_character;
	printf("please entre a character to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&checked_character);

	if((checked_character > 'a' && checked_character < 'z') || (checked_character > 'A' && checked_character < 'Z') )
	{
		printf("%c is alphabet\n",checked_character);
	}
	else
	{
		printf("%c is  not alphabet\n",checked_character);
	}
}

