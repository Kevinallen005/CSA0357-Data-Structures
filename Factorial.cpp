#include<stdio.h>
int fact(int n)
{
	int x=1;
	for(int i=1;i<=n;i++)
	{
		x*=i;
	}
	return x;
}
int main()
{
	int n,x;
	printf("Enter The number:");
	scanf("%d",&n);
	x=fact(n);
	printf("%d",x);
}
