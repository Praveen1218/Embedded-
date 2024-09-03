#include<stdio.h>
void main()
{
	int i,n,a[100],large;
	printf("{enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(large<a[i])
		{
			large=a[i];
		}
	}
	printf("largest of %d elements in an array=%d",n,large);
}
