#include<stdio.h>
#define L 25
int main()
{
	char s[100],word[100];
	int i=0,w=0,c=0,j=0;
	gets(s);
	while(s[i]!='\0')
	{
		++c;
		if( s[i]==' ' || s[i]=='\n' )
			{
			word[w]=c-1;
			++w;
			c=0;
		}
		
		i++;
	}
	for(i=L;i>=1;--i)
	{
		for(j=0;j<=w;++j)
		{
			if(i<=word[j])
			  putchar('*');
			  else
			  putchar(' ');
		}
		putchar('\n');
	}
	return 0;
	}
