/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"

int main()
{
	int boxes_weight[5];
	int i,sum=0;
	int *px = boxes_weight;
	for(i=0; i<5 ; i++)
	{
		printf("enter weight of box %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",px);
		sum += *px;
		px++;
	}
    printf("sum weight of all boxes is = %d",sum);
	return 0;
}

