#include<stdio.h>
int main()
{
	int intType;
	float floatType;
	char charType;
	printf("size of int:%zu bytes\n",sizeof(intType));
	printf("size of float:%zu bytes\n",sizeof(floatType));
	printf("size of char:%zu bytes\n",sizeof(charType));
	return 0;
}

