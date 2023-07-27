/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void get_prime_number(int x,int y);
void main()
{
	int interval_1 , interval_2;
	printf("Please inter two numbers (intervals) : \n");
	printf("interval 1 : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&interval_1);
	printf("interval 2 : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&interval_2);
	printf("the prime numbers between %d and %d is : ",interval_1,interval_2);
	get_prime_number(interval_1,interval_2);

}
void get_prime_number(int x,int y)
{
	int i ,j , prime_flag,check_flag=0;
	if(x==0 || x==1)
		x=2;
	if(y==0 || y==1)
		y=2;
	for (i=x ; i<=y ; i++)
	{
		prime_flag = 0;
		for(j=2 ; j<i ; j++)
		{
			if (i%j != 0)
				prime_flag++;
			else
				break;
		}
		if(prime_flag == i-2)
		{
			printf("%d \t",i);
			check_flag++;
		}
	}
	if(check_flag==0)
		printf("there is no prime numbers between those two numbers");
}
