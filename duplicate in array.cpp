#include <stdio.h>
int main()
{
int n,x,p,i,j;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter the element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
    		if(arr[i]==arr[j])
    		{
    		printf("\nDUPLICATE ELEMENT:%d",arr[i]);
			}
		}
	}

}
