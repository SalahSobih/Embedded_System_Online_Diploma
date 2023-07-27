/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	float matrix [3][3];
	float transpose_matrix [3][3];
	int row,column;
	for(row=0 ; row<3 ; row++)
	{
		for(column=0 ; column<3 ; column++)
		{
			printf("Enter the item (%d,%d) : ",row,column);
			fflush(stdin); fflush(stdout);
			scanf("%f",&matrix[row][column]);
		}
	}
	//print matrix
	printf("The Matrix is : \n");
	for(row=0 ; row<3 ; row++)
	{
		for(column=0 ; column<3 ; column++)
			printf("%0.2f \t\t",matrix[row][column]);
		printf("\n");
	}
	// get transpose
	for(row=0 ; row<3 ; row++)
			for(column=0 ; column<3 ; column++)
				transpose_matrix[row][column] = matrix[column][row];
	//print transpose matrix
	printf("==================================== \n");
	printf("The Transpose Matrix is : \n");
	for(row=0 ; row<3 ; row++)
	{
		for(column=0 ; column<3 ; column++)
			printf("%0.2f \t\t",transpose_matrix[row][column]);
		printf("\n");
	}
}
