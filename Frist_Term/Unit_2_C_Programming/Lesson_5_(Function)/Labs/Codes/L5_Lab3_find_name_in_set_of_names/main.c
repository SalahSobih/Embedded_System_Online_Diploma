/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#include "string.h"
int search_fn(char arr [][10],char arrn [],int x);
void main()
{
	char SetOfNames[5][10] = {"salah","omar","ahmed","sayed","tarek"};
	char name [10];
	printf("Please enter the name for check : ");
	fflush(stdin); fflush(stdout);
	gets(name);
	if(search_fn(SetOfNames,name,5) == 1)
		printf("sorry this name is not in the list\n");
	else
		printf("congratulation this name in the list\n");

}
int search_fn(char arr [][10],char arrn [],int x)
{
	int i , c=1;
	for(i=0 ; i<x ; i++)
	{
		c = stricmp(arr[i],arrn);
		if(c == 0)
			return c;
	}
	return c;
}
