/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: 3AMO0ORY
 */
#include "stdio.h"
struct SData{
	unsigned char data1;
	unsigned int data2;
	unsigned char data3;
	unsigned short data4;
};
struct SData data1;
void print_memory_rang(char *p , int size)
{
	int i;
	for(i=0 ; i<size ; i++)
	{
	printf("address ==> %p \t  data ==> %X\n",p+i,(unsigned char)*(p+i));
	}
}
int main ()
{
	data1.data1 = 0x11;
	data1.data2 = 0xFFFFEEEE;
	data1.data3 = 0x22;
	data1.data4 = 0xABCD;
	print_memory_rang((char*)&data1,sizeof(data1));
	return 0;
}

