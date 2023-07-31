/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */


// Online C compiler to run C program online
#include <stdio.h>
#include "string.h"
int main()
{
  int number;
  printf("enter the integer number : ");
  fflush(stdin); fflush(stdout);
  scanf("%d",&number);
  printf("number entered is : %d\n",number);
  printf("number as binary form is : ");
  convert_to_binary(number);
}

void convert_to_binary(int x)
{
    if(x>=1)
    {
        convert_to_binary(x/2);
        printf("%d" ,x%2);
    }
}



