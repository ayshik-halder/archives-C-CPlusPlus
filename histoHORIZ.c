#include<stdio.h>
int main()
{
	char s[100];
	int i=0;
	gets(s);
	while(s[i]!='\0')
	{
		if( s[i]==' ' || s[i]=='\n' )
			printf("\n");
		else
			printf("*");
		i++;
	}
	return 0;
	}
