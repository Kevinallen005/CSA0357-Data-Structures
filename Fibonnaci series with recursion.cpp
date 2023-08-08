#include<stdio.h>
int fib(int n)
{
	if (n>1)
	{
		return fib(n-1)+fib(n-2);
	}
	else
	{
	    return n;
	}
}
int main()
{
	int n,x;
	printf("Enter The number:");
	scanf("%d",&n);
    for(int i=0;i<n;i++){
	x=fib(i);
	printf("%d\t",x);
	}
}
