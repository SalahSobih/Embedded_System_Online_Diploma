/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include<stdio.h>
#include<String.h>

int main()
{

	char string[100];
	char* ps = string;
	int i;

	printf("Pointer : print string in reverse order : \n");
	printf("----------------------------------------------\n");
	printf("Input strint : ");
	fflush(stdin); fflush(stdout);
	gets(string);
	printf("Reverse of the string is : ");
	for(i=strlen(string)-1 ; i>=0 ; i--)
	{
		printf("%c",ps[i]);
	}
			printf("\n");
	return 0;
}
