/*
 ============================================================================
 Name        : student_avg_degree.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,no_of_student ;
	float sum=0 , degree, avg=0;
	printf("Please enter number of student : "); /* prints !!!Hello World!!! */
	fflush(stdin); fflush(stdout);
	scanf("%d",&no_of_student);
	for(i=1 ; i<=no_of_student ; i++)
	{
		printf("entre degree of student no (%d) : ", i);
		fflush(stdin); fflush(stdout);
		scanf("%f",&degree);
		sum+=degree ;
	}
	avg = sum/no_of_student;
	printf("avrage degrees of all student is : %f", avg);

	return EXIT_SUCCESS;
}
