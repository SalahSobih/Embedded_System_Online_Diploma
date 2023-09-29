/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include <stdio.h>

int main() {
   int a = 2, b=4, c=8 , d=10;
   int* arr1[2]={&a,&b};
   int* arr2[2]={&c,&d};
   int* (*arr[2])[2] = {arr1,arr2};

    printf("value = %d\n",*(*arr[1])[0]);
    printf("value = %d\n",*(*(**(arr+0)+0)));

    return 0;
}

