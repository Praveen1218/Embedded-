#include<stdio.h>
void sum();
void main()
{
	printf("\ngoing to calculate the sum of two numbers:");
	sum();
}
void sum()
{
	int a,b;
	printf("\nenter two numbers");
	scanf("%d %d",&a,&b);
	printf("the sum is %d",a+b);
}
