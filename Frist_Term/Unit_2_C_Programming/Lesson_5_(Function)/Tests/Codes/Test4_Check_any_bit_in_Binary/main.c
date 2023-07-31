/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
int Check4thInBinary(int x,int p);
// Online C compiler to run C program online
int main()
{
	int number,bit_position;
	printf("enter the integer number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("enter position bit to check (index start from zero): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&bit_position);
	printf("number entered is : %d\n",number);
	printf("number as binary form is : ");
	printf("\nthe %d bit is : %d",bit_position,Check4thInBinary(number,bit_position));
}

int Check4thInBinary(int x,int p)
{
	static int counter = 0;
	int bit_4th = 0;
	if(x>=1)
	{
		counter++;
		bit_4th |= Check4thInBinary(x/2,p);
		counter--;
		printf("%d" ,x%2);
		if(counter==p)
		{
			return x%2;
		}
		else
			return bit_4th;

	}
	return bit_4th;
}
