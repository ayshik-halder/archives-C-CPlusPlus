#include<stdio.h>
long long int find(long long  int decimal)
{

	if(decimal==0)
		return 0;
	else
	  return (decimal % 2 + 10 * find(decimal / 2 ));	

}

int main()
{

	long long int decimal, binary;
	printf("\n Enter decimal ? ");
	scanf("%lld",&decimal);
	binary=find(decimal);
	printf("\n Binary Equivalent= %lld",binary);
	return 0;

}

