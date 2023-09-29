/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include<stdio.h>

int main()
{

	char letters[26];
	char *pa = letters;
	int i;
	//fill letters array with alphabets
	for(i=0 ; i<26 ; i++)
	{
		pa[i] = 'A'+i;
	}
	//print all alphabet
	for(i=0 ; i<26 ; i++)
	{
		printf("%c \t",pa[i]);
		if(i==12)
			printf("\n");
	}

	return 0;
}

