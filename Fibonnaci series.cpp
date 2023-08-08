#include<stdio.h>

int main()
{
	int n,w1,w2,w3;
	printf("Enter The number:");
	scanf("%d",&n);
	w1=0;
	w2=1;
	while(n!=0)
	{
		printf("%d\t",w1);
		w3=w1+w2;
		w1=w2;
		w2=w3;
		n--;
	}
}
