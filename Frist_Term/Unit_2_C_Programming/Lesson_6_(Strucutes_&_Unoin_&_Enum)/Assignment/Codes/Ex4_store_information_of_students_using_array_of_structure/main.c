/*
 * main.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
struct Sstudent
{
	char name[10];
	int rolling;
	float marks;
};
void get_students_data(struct Sstudent s[]);
void diplay_students_information(struct Sstudent s[]);
void main()
{
	struct Sstudent student[10];
	printf("Enter information of Students : \n");
	get_students_data(student);

	printf("Dispaying information of Students : \n");
	diplay_students_information(student);
}

void get_students_data(struct Sstudent s[])
{
	int i;
	for(i=0 ; i<10 ; i++)
	{
		s[i].rolling = i+1;
		printf("For roll number %d\n",s[i].rolling);
		printf("Enter name : ");
		fflush(stdin); fflush(stdout);
		scanf("%s",s[i].name);
		printf("Enter marks : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&s[i].marks);
	}
}
void diplay_students_information(struct Sstudent s[])
{
	int i ;
	for(i=0 ; i<10 ; i++)
	{
		printf("Information for Roll number %d:\n",s[i].rolling);
		printf("name : %s\n",s[i].name);
		printf("name : %.2f\n",s[i].marks);
	}
}

