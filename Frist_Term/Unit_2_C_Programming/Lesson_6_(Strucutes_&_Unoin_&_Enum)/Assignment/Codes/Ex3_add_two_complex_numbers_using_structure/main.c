/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
struct Scomplex_number
{
	float real;
	float imagin;
}num1,num2;
struct Scomplex_number add_complex(struct Scomplex_number s1, struct Scomplex_number s2);
void main()
{
	printf("For 1st complex number : \n");
	printf("Enter real and imaginary respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1.real,&num1.imagin);
	printf("For 2nd complex number : \n");
	printf("Enter real and imaginary respectively : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num2.real,&num2.imagin);
	printf("Sum = %.1f+%.1fi",add_complex(num1,num2).real,add_complex(num1,num2).imagin);
}
struct Scomplex_number add_complex(struct Scomplex_number s1, struct Scomplex_number s2)
{
	struct Scomplex_number result;
	result.real = s1.real + s2.real;
	result.imagin = s1.imagin + s2.imagin;
	return result ;
}


