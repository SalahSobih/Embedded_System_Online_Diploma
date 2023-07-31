/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int clear_bit(int n , int p);
int main()
{
	int number,position,cleared;
	printf("Enter the number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("Enter Bit Position : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&position);

	printf("number before clearing the %d bit : %d",position,number);
	cleared = clear_bit(number,position);
	printf("\nnumber After clearing the %d bit : %d",position,cleared);

}

int clear_bit(int n , int p)
{
	n &= ~(1<<p);
	return n;
}
