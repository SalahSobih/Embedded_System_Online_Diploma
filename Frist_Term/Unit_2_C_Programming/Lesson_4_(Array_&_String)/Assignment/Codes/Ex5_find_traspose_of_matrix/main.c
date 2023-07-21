/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
void main ()
{
	int my_matix[20][20];
	int traspose_matix[20][20];
	int R, C, Row, Column;
	while(1){
		printf("Please Entre Rows of matrix : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&Row);
		if (Row>20 || Row<0)
			printf("Please Enter number of Rows between 1 to 20 \n");
		else
			break;
	}
	while(1){
		printf("Please Entre Column of matrix : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&Column);
		if (Column>20 || Column<0)
			printf("Please Enter number of Columns between 1 to 20 \n");
		else
			break;
	}
	for (R=0 ; R<Row ; R++)
		for(C=0 ; C<Column ; C++)
		{
			printf("Entre Element %d%d : ",R+1,C+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&my_matix[R][C]);
		}

	// get traspose
	for (R=0 ; R<Column ; R++)
		for(C=0 ; C<Row ; C++)
		{
			traspose_matix[R][C]=my_matix[C][R];
		}

	printf("========================\n");
	//print entred matrix
	for (R=0 ; R<Row ; R++)
	{
		for(C=0 ; C<Column ; C++)
			printf("%d \t\t",my_matix[R][C]);
		printf("\n");
	}
	printf("========================\n");
	//print traspose matrix
	for (R=0 ; R<Column ; R++)
	{
		for(C=0 ; C<Row ; C++)
			printf("%d \t\t",traspose_matix[R][C]);
		printf("\n");
	}
}
