#include<stdio.h>
void main()
{    
    
	int ar[100],n,sum;
	scanf("%d", &n);
	int i;
	printf("Enter no.s");
	for(i=0; i<n;i++)
	{
		scanf("%d", &ar[i]);
	}
	for(i=0; i<n;i++)
	{
		sum+=ar[i];
	}
	double avg=sum/n;
	printf("%f",avg);
	
	
}
