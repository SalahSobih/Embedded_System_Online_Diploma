/*
 * man.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main()
{
	char operator ;
	float num1,num2;
	printf("Enter an operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two numbers \n");
	printf("first number : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num1);
	printf("second number : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&num2);
	switch(operator)
	{
	case '+':
		printf("%f + %f = %0.2f",num1, num2, num1+num2);
		break;
	case '-':
		printf("%f - %f = %0.2f",num1, num2, num1-num2);
		break;
	case '*':
		printf("%f * %f = %0.2f",num1, num2, num1*num2);
		break;
	case '/':
		printf("%f / %f = %0.2f",num1, num2, num1/num2);
		break;
	default:
		printf("You entred wrong operator \n");
		break;
	}
}
