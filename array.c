#include<stdio.h>
#define max 100
void main()
{
	static int  arr [max] [max];
	int i,j,r,c;
	int  ctr=0;
	printf("How any rows and colums are in the matrix");
	scanf("%d %d",&r,&c);
       printf("Enter the elements in the matrix:\n");
	for (i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   	scanf("%d",&arr[i][j]);
			if  (arr[i][j]==0)
				++ctr;
		}
	}
	if (ctr>((r*c)/2))
		printf("The given matrix is a sparse matrix:\n");
	else
		printf ("The given matrix is not a sparse matrix>\n");
	printf("there are %d number of zeros in the matrix .\n",ctr);
}
