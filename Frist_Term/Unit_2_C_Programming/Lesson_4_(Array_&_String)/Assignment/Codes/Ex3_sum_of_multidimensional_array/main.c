/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float a_matrix [2][2];
	float b_matrix [2][2];
	int row,column;
	printf("Enter elemts of 1st matrix : \n");
	for(row=0 ; row<2 ; row++)
		for(column=0 ; column<2 ; column++)
		{
			printf("Enter 1st matrix element %d %d : ",row+1,column+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a_matrix[row][column]);
		}

	printf("Enter elemts of 2nd matrix : \n");
	for(row=0 ; row<2 ; row++)
		for(column=0 ; column<2 ; column++)
		{
			printf("Enter 2nd matrix element %d %d : ",row+1,column+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b_matrix[row][column]);
		}
	//sum two matrices
	printf("Sum Of Two Matices : \n");
	for(row=0 ; row<2 ; row++)
	{
		for(column=0 ; column<2 ; column++)
		{
			printf("%0.2f \t\t",a_matrix[row][column]+b_matrix[row][column]);
		}
		printf("\n");
	}


}
