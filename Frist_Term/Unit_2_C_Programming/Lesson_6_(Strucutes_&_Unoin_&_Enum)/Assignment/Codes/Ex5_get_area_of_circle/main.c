/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
#define PI 3.14
#define Area(r) PI*(r)*(r)
void main ()
{
	float radius,area;
	printf("Enter the Radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);
	area = Area(radius);
	printf("Area = %.2f",area);
}
