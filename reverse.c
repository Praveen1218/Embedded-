#include<stdio.h>
int main()
{
	int n,arr[n];
	printf("enter the number of elements:");
	scanf("%d", &n);
	printf("enter the array elements:");
	for(int i=0;i<n;i++);
	scanf("%d",&arr[n]);
	printf("the array elements in reverse order:\n");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
        return  0;
}
