/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
void Check4thInBinary(int x);
int main()
{
	int number;
	printf("enter the integer number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("number entered is : %d\n",number);
	Check4thInBinary(number);
}

void Check4thInBinary(int x)
{
	int y;
	y = x & ~(1<<4);
	if(y==x)
		printf("the 4th bit in %d is 0",x);
	else
		printf("the 4th bit in %d is 1",x);
}
