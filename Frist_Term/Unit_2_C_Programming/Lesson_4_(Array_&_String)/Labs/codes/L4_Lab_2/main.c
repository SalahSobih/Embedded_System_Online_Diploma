/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float x [5] = {5,16,22,3.5,15};
	float y ;
	int i;
	for(i=0 ; i<5 ; i++)
	{
		y = 5*x[i]*x[i]+3*x[i]+2;
		printf("Y(%0.2f) = %0.2f \n",x[i],y);
	}
}
