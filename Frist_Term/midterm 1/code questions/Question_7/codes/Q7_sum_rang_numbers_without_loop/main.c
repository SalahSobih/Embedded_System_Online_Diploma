/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
int sum_by_recursion(void);
void main ()
{
	printf("sum numbers from 1 to 100 is = %d",sum_by_recursion());

}
int sum_by_recursion(void)
{
	static int i=0;
	int result=0;
	if(i<100)
		result = ++i + sum_by_recursion();

	return result;
}
