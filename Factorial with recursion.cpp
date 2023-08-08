#include<stdio.h>
int fact(int n)
{
	if (n>=1)
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n,x;
	printf("Enter The number:");
	scanf("%d",&n);
	x=fact(n);
	printf("%d",x);
}
