/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
float r , result;
char choice;
printf("please entre circut redius : ");
fflush(stdin); fflush(stdout);
scanf("%f",&r);
printf("choose caculation type (a for area c for circumference) : ");
fflush(stdin); fflush(stdout);
scanf("%c",&choice);
switch(choice)
{
case 'a' :
case 'A' :
{
	result = 3.14*r*r;
	printf("Area is : %f" , result );
}
break;
case 'c' :
case 'C' :
{
	result = 2*3.14*r;
	printf("circumference is : %f" , result );
}
break;
default :
{
	printf("wronge choice");
}
break;
}
}
