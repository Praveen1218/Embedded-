int fact(int n)
{
	int fact=1;
	if(n==0)
	return 1;
	else
	{
	for(int i=1;i<=n;i++)
	fact=fact*i;
	return fact;
	}
}
