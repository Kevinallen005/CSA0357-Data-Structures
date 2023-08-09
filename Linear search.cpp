#include<stdio.h>
int linear(int a[],int x,int n)
{
	for (int i=0;i<n;i++)
	{
		if (a[i]==x)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,x;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched:");
	scanf("%d",&x);
	int p=linear(arr,x,n);
	if (p==-1)
	{
		printf("\nThe Element is not present\n");
	}
	else
	{
		printf("\nThe element is presnt in the INDEX %d",p);
	}
}
