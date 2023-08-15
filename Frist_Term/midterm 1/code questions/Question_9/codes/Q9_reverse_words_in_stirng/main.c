/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "String.h"
void reverse_words(char array[],int x);
void main()
{
	char sentence[20];
	printf("Please enter the sentence to reverse it : ");
	fflush(stdin); fflush(stdout);
	gets(sentence);
	printf("input string is : %s",sentence);
	printf("Reversed words are : ");
	reverse_words(sentence,strlen(sentence));
}

void reverse_words(char array[],int x)
{
	int i , space_index;
	for(i=0;i<x;i++)
		if(array[i]==' ')
		{
			space_index = i;
		}
	for(i=space_index+1;i<x;i++)
		printf("%c",array[i]);
	printf("%c",array[space_index]);
	for(i=0;i<space_index ;i++)
		printf("%c",array[i]);
}
