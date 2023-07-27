/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int calc_power(int n,int p);
void main()
{
	int number,power;
	printf("Please Enter Base Number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("Please Enter positive Power : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&power);
	printf("%d^%d = %d",number,power,calc_power(number,power));
}
int calc_power(int n,int p)
{
	int temp=1;
	if (p==0)
		return temp;
	else if(p>1)
		temp = calc_power(n,p-1);
	return temp*n;

}
