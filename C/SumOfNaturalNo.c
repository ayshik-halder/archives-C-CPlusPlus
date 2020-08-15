/*C program to calculate sum of first N natural numbers.*/

#include <stdio.h>

int main()
{
    int n,i;
	int sum;

	printf("Enter the value of N :");
	scanf("%d",&n,&i);

	sum=0;

	for(i=1;i< n;i++)
		sum+=i;

	printf("\nSum is = %d",sum);
	
    return 0;
}
