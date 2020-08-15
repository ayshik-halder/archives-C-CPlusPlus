#include<stdio.h>
int main(int argc,char* argv[])
{ 
  int i;
  printf("program name is : %s",argv[0]);
  if(argc==1)
  	printf("\n No extra CLA passed(Only Program name):");

  if(argv>=2)
  {
  	printf("\n No. of Arguments passed: %d",argc);
  	printf ("\n Passed Command Line Arguments are: \n");
  	for(i=0;i<argc;i++)
  		printf("\n argv[%d]: %s",i,argv[i]);
  }
  return 0;
}
