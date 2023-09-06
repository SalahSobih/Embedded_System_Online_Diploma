/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
struct Sstudent
{
	char name[10];
	int rolling;
	float marks;
} student;
void main()
{
	printf("Enter information of Student : \n");
	printf("Enter name : ");
	fflush(stdin); fflush(stdout);
	scanf("%s",student.name);
	printf("Enter roll number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&student.rolling);
	printf("Enter marks : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&student.marks);
	printf("Dispaying information : \n");
	printf("name : %s\n",student.name);
	printf("Roll : %d\n",student.rolling);
	printf("name : %.2f\n",student.marks);
}

