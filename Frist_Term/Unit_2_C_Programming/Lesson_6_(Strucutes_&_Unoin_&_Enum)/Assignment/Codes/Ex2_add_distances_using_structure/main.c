/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
struct Sdistance
{
	float feet;
	float inch;
};
float add_distance(struct Sdistance s1, struct Sdistance s2);
void main()
{
	struct Sdistance dist1,dist2;
	printf("Enter 1st distance : \n");
	printf("Enter feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dist1.feet);
	printf("Enter inch : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dist1.inch);

	printf("Enter 2nd distance : \n");
	printf("Enter feet : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dist2.feet);
	printf("Enter inch : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&dist2.inch);
	printf("Sum of distances = %.2f",add_distance(dist1,dist2));
}
float add_distance(struct Sdistance s1, struct Sdistance s2)
{
	float result ;
	result = s1.feet + s2.feet + (s1.inch/12) + (s2.inch/12);
	return result ;
}
