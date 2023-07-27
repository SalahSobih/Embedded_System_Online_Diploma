/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "String.h"
void reverse_sentence(char array[],int x);
void main()
{
	char sentence[20];
	printf("Please enter the sentence to reverse it :  ");
	fflush(stdin); fflush(stdout);
	gets(sentence);
	printf("Reverse sentence is : ");
	reverse_sentence(sentence,strlen(sentence));
}

void reverse_sentence(char array[],int x)
{
	if(x>0)
	{
	printf("%c",array[x-1]);
	reverse_sentence(array,x-1);
	}
}
