#include<stdio.h>

	void main()
{
int i;
char c[20],temp;
printf("\nEnter character");
gets(c);
for(i=0;c[i]!="\0";i++)
{
	if(c[i]>=65&&c[i]<=90)
	{
		temp=c[i];
		c[i]=temp+32;
	}
	else
	{
		temp=c[i];
	 	c[i]=temp-32;
	}
}
puts(c);

return 0;
}


