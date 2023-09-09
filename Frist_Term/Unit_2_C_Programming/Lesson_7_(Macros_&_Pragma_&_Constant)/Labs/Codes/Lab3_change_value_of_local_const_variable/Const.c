#include "stdio.h"
	const int x = 5;
int main()
{
	const int x = 5;
	printf("x = %d\n",x);
	int * px = &x;
	*px = 8;
	printf("x = %d\n",x);
	return 0;
}