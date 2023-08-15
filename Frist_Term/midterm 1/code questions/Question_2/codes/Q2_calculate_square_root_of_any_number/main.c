/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include"stdio.h"
float get_square_root(float n);
void main ()
{
	float number;
	printf("Please Enter the number to get squatre root : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&number);
	printf("Square root of %0.3f is %0.3f",number ,get_square_root(number));
}
float get_square_root(float n)
{
	float result, nearest_root =1;
	int i=1 ;
	while(1)
	{
		if (i*i == n)
			return i;
		else if (i*i > n)
		{
			nearest_root = i-1;
			break;
		}
		else
			i++;
	}
	result =  nearest_root + (n-nearest_root*nearest_root)/(2*nearest_root);
	return result;
}
