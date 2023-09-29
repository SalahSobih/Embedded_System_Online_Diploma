/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int main()
{
	//int x = 3;
	int *p = 0x61FF18;
	 //int *p = &x;
	 *p = 12;
	// Write C code here
	printf("x = %d   p = %X",*p,p);
	return 0;
}

