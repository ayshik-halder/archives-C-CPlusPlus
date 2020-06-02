#include<stdio.h>
#include<stdio.h>
int main()
{
	FILE *fp, *fp2;
	int p;
	char filename[100];
	printf("\nEnter the file name: ");
	scanf("%s", filename);
	fp= fopen(filename,"r");
	if (fp==NULL)
	{
		printf("File doesn't exist");
		return 0;
	}
	
	fp2=fopen("newfile.txt","w");
	while((p=getc(fp))!=EOF)
	{

			if(p==' ' ||p=='\n' ||p=='\t' )
			{
				
			}
			else
			
				fputc(p,fp2);
     
    
	}
	fclose(fp);
	fclose(fp2);
	return 1;
	
}
