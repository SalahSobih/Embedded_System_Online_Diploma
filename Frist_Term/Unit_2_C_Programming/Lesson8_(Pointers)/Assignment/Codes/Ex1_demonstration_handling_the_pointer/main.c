/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include<stdio.h>

int main ()
{
	int m = 29;
	int *ab;

	printf("address of m : 0x%p\n",&m);
	printf("Value of m : %d\n",m);
	printf("--------------------------------------------\n");

	printf("Now ab is assigned with the address of m \n");
	ab = &m;
	printf("address of pointer ab : 0x%p\n",(int*)ab);
	printf("Content of pointer ab : %d\n",*ab);
	printf("--------------------------------------------\n");
	printf("the value of m assigned to 34 now\n");
	m = 34;
	printf("address of pointer ab : 0x%p\n",ab);
	printf("Content of pointer ab : %d\n",*ab);
	printf("--------------------------------------------\n");
	printf("the pointer variable ab is assigned with the value 7 now\n");
	*ab = 7;
	printf("address of m : 0x%p\n",&m);
	printf("Value of m : %d\n",m);

	return 0;
}

