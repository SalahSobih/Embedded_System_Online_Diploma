#include "stdio.h"

#define mac1 10
#define mac2(a,b) a+b
#define mac3(...) printf(__VA_ARGS__)
#define mac4(a,...) printf(__VA_ARGS__,a)

#define Dprintf(Debug_Level,...) if (Debug_Level>1)\
									printf ("@ Function : %s , File : %s , Line : %d",__func__,__FILE__,__LINE__);\
								printf ("\t>> "); \
								printf (__VA_ARGS__);

void CAN_init()
{
	Dprintf(3,"...\n");
	printf("sum is : %d\n",mac2(5,6));

}
void CAN_Send()
{
	int x=12;
	Dprintf(3,"...\n");
	mac4(x,"example 4 = %d\n");
}

int main()
{
	Dprintf(2,"Start Main \n");
	printf("example1 = %d\n",mac1);
	mac3("salah soliman \n");
	CAN_init();
	CAN_Send();
	Dprintf(2,"End Main \n");
	return 0;
}