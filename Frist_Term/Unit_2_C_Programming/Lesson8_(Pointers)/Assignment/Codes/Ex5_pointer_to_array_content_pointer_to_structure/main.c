/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include<stdio.h>
struct employee{
	char* EmpName;
	int EmpId;
};

int main()
{
 struct employee emp1 = {"salah",15}, emp2 = {"Alex",50} , emp3 = {"omar",60};
 struct employee *arr[3] = {&emp1,&emp2, &emp3};
 struct employee* (*pt)[3] = &arr;

 printf("Employee name is : %s\n",(*(*pt+1))->EmpName);
 printf("Employee ID is : %d\n",(*(*pt+1))->EmpId);

	return 0;
}

