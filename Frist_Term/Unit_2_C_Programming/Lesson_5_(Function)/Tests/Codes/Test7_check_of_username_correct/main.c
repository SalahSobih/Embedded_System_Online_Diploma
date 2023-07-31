/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
#include "string.h"
void check_user(char arr_C[],char arr_E());
int main()
{
	char correct[20];
	char user[20];
	printf("please enter Correct username : ");
	fflush(stdin); fflush(stdout);
	gets(correct);
	printf("please enter username to check : ");
	fflush(stdin); fflush(stdout);
	gets(user);
	check_user(user,correct);
}
void check_user(char arr_C[],char arr_E())
{
	int flag=1;
	flag = stricmp(arr_C,arr_E);
	if(flag == 0)
		printf("Congratulation Username is Correct ^_^");
	else
		printf("Sorry username is Wronge...");

}

