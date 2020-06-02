//write a c prog to create the structure of 1 employee and calculate their total monthly salary of user given n inputs.
#include<stdio.h>
#include<stdlib.h>

 typedef struct employee
{
	char Name[20];
	int da;				//dearnessallowance
	int ns;				//netsalary
	int gross;			//grosssalary
}employee;

void main()
{
	employee x[20];
	int i=0,total=0,n;
	printf("\n Enter no. of employees \n ");
	scanf(" %d",&n);
	printf("\n\n ENTER DETAILS \n\n");
	for( i=0;i<n;i++)
	{
		printf("\n Enter name of Employee %d \n ",i+1);
		
		//gets(x[i].Name);
		fflush(stdin);
		fgets(x[i].Name,sizeof(x[i].Name),stdin);
		//scanf("%s",&x[i].Name);  
		printf("\n Enter DA = ");
		scanf(" %d",&x[i].da);
	   	printf("\n Enter NS =");
	   	scanf(" %d",&x[i].ns);
	   	
	   	x[i].gross=x[i].da + x[i].ns;
	   	
		printf("\n Gross Salary = %d",x[i].gross);
	   	total+=x[i].gross;
	}
	printf("\n\n\n-----------------\n\n\n");
	printf("\n\n\nTOTAL SALARY = %d",total);
		
}
