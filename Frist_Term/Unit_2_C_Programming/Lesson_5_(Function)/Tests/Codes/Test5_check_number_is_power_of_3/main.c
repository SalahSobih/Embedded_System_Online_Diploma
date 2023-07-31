/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>
int check_power_3(int n);
int main()
{
	int number;
	printf("please enter the number to check : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number);
	printf("%d",check_power_3(number));
}

int check_power_3(int n)
{
	int i;
	static int check=1;
	i=n%3;
	n /=3;
	if(i!=0)
		check = 1;
	else if(i==0 && n==3)
		check=0;
	else
		check = check_power_3(n);

	return check;

}

