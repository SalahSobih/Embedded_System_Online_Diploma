/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include"stdio.h"
struct Scomplex_number
{
	float m_real_part;
	float m_imagin_part;
};
struct Scomplex_number Read_numbers();
struct Scomplex_number add_complex(struct Scomplex_number x,struct Scomplex_number y);
void printcomplex(char arr[],struct Scomplex_number n);
void main()
{
	struct Scomplex_number num1,num2;
	printf("Please entre two complex numbers to adding them : \n");
	num1 = Read_numbers("enter number 1 ");
	printcomplex("the first number = ",num1);
	num2 = Read_numbers("enter number 2 ");
	printcomplex("the second number = ",num2);
	printcomplex("the sum of two given numbers = ",add_complex(num1,num2));

}
struct Scomplex_number Read_numbers(char arr[])
{
	struct Scomplex_number returned_number;
	printf("%s in this form (1,2) : ",arr);
	fflush(stdin); fflush(stdout);
	scanf("%f,%f",&returned_number.m_real_part,&returned_number.m_imagin_part);
	return returned_number;
}
struct Scomplex_number add_complex(struct Scomplex_number x,struct Scomplex_number y)
{
	struct Scomplex_number z;
	z.m_real_part = x.m_real_part + y.m_real_part;
	z.m_imagin_part = x.m_imagin_part + y.m_imagin_part;
	return z;
}
void printcomplex(char arr[],struct Scomplex_number n)
{
	if(n.m_imagin_part<0)
		printf("%s %.2f%.2fi \n",arr,n.m_real_part,n.m_imagin_part);
	else if (n.m_imagin_part==-0)
		printf("%s %.2f\n",arr,n.m_real_part);
	else
		printf("%s %.2f+%.2fi \n",arr,n.m_real_part,n.m_imagin_part);
}
