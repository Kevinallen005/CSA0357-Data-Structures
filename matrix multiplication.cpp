#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.of.rows and columns:");
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	int c[n][n];
	int i,j;
	printf("\nEnter the elements of 1st matrix\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
		printf("\nEnter The element:");
		scanf("%d",&a[i][j]);
	}}
	printf("\nEnter the elements of 2nd matrix\n");
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
		printf("\nEnter The element:");
		scanf("%d",&b[i][j]);
	}}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			c[i][j]=0;
			for(int k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	return 0;
}
