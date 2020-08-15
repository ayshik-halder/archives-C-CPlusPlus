#include<stdio.h>
int main()
{
	char s[100];
	int i;
	int freq[256]={0};
	printf("\nEnter String?  ");
	gets(s);
	printf("\nFrequency of each character :");
	for(i=0;s[i]!='\0';i++)
	{
		freq[s[i]]++;
	}
	for(i=0;i<256;i++)
	{
		if(freq[i]!=0)
		{
			printf("\n '%c' comes %d times. ",i,freq[i]);
		}
	}
	return 0;	
}
