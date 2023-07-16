/*
 * man.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main()
{
	char checked_char ;
	printf("Enter an alphabet to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&checked_char);
	switch(checked_char)
	{
	case 'a':
	case 'A':
	case 'i':
	case 'I':
	case 'u':
	case 'U':
	case 'e':
	case 'E':
	case 'o':
	case 'O':
		printf("%c is vowel character",checked_char);
		break;
	default:
		printf("%c is consonant character",checked_char);
		break;
	}
}
