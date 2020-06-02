#include<stdio.h>
void selectionSort(int arr[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("\n FX sorting ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
void main()
{
	int i,n;
	printf("\nEnter size ");
	scanf("%d",&n);
	int arr[20];
	printf("\n Enter elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	selectionSort(arr,n);
	printf("\nMain sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
}
