#include<stdio.h>
int insert(int arr[],int n)
{
	printf("\nINSERTION\n");
	int x,p;
	printf("enter the element to be inserted:");
	scanf("%d",&x);
	printf("enter the position of the element to be inserted:");
	scanf("%d",&p);
	for (int i=n;i>=p-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[p-1]=x;
	n=n+1;
	printf("\nAFTER INSERTION\n");
	for (int i=0;i<n;i++)
	{
		printf("element %d : %d\n",i+1,arr[i]);
	}
}
int del(int arr[],int n)
{
	printf("\nDELETION\n");
	int p;
	printf("enter the position of the element to be DELETED:");
	scanf("%d",&p);
	for (int i=p-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n=n-1;
    printf("\nAFTER DELETION\n");
	for (int i=0;i<n;i++)
	{
		printf("element %d : %d\n",i+1,arr[i]);
	}
}
int main()
{
	int n,x,p;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	insert(arr,n);
	n=n+1;
	del(arr,n);
	n=n-1;
}

	
	
