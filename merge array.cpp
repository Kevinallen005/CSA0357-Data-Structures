#include<stdio.h>
int main()
{	
    printf("ARRAY 1\n");
	int n1;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n1);
    int arr1[n1];
	for (int i=0;i<n1;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr1[i]);
	}
	printf("\nARRAY 2\n");
	int n2;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n2);
    int arr2[n2];
	for (int i=0;i<n2;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr2[i]);
	}
	int n3=n1+n2;
	int arr3[n3];
	for (int i=0;i<n1;i++)
	{
		arr3[i]=arr1[i];
	}
	for (int i=0;i<n2;i++)
	{
		arr3[n1+i]=arr2[i];
	}
	printf("\nMERGED ARRAY\n\n");
	for(int i=0;i<n3;i++)
	{
		printf("%d\t",arr3[i]);
	}
	
}
