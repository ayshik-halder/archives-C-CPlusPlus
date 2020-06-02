#include<stdio.h>
void selectionSort(int arr[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			min=i;
		}
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=arr[i];
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
	 int a[20];
	printf("\n Enter elements ");
		for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	printf("\nMain sorting: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
