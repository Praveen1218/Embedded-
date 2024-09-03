#include<stdio.h>
#define pi 3.14159
int main()
{
	float radius,area;
	printf("enter the radius of the circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("the area of the circle is:%f",area);
	return 0;
}

