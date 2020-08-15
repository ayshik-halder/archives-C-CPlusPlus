#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char line[10][100],fname[200];
	FILE *fptr=NULL;
	int i=0,j=0;
	printf("\nEnter file name? ");
	scanf("%s",fname);
	fptr=fopen(fname, "r");
	while(fgets(line[i],100,fptr))
	{
		line[i][strlen(line[i])-1]='\0';
		i++;
	}
	for(j=0;j<i;++j)
	{
		printf(" %s\n ", line[j]);
	}
	printf("\n");
	return 0;
}

