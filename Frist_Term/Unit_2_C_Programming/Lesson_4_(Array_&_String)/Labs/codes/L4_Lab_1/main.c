/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float students_degrees [10];
	int i ;
	for(i=0 ; i<10 ; i++){
		printf("Enter Student %d Degree : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&students_degrees[i]);
	}
	for(i=0 ; i<10 ; i++)
		printf("Student %d Degree is %0.2f \n",i+1, students_degrees[i]);
}
