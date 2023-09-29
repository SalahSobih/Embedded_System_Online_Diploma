/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
int* call ()
{
	int a = 25;
	a++;
	return (int*)&a;
}
int main()
{
	int *ptr;
	ptr = call();
	printf("value = %d",*ptr);
	return 0;
}


