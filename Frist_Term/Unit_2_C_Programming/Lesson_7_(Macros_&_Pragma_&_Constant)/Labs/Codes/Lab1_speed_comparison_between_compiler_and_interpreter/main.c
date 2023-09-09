#include "stdio.h"
#include "Time.h"

int main ()
{
	clock_t t;
	t = clock();
	int num1=12;
	printf("the first number : %d\n",num1);
	int num2=12;
	printf("the second number : %d\n",num2);
	int sum=num1 + num2;
	printf("The sum of two numbers is : %d\n",sum);
	int num3=45;
	int num4=45;
	int num5=45;
	int num6=45;
	int num7=45;
	int num8=45;
	int num9=45;
	int num10=45;
	int num11=45;
	int num12=45;
	int num13=45;
	int num14=45;
	int num15=45;
	t = clock() - t;
	double time = ((double)t)/CLOCKS_PER_SEC;
	printf("The Execution Time is : %lf\n",time);
	return 0;
}
