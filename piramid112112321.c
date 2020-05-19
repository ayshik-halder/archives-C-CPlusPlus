#include<stdio.h>    
#include<stdlib.h>  

int main()
 {  
 	int i,j,k,l,n,c,d;      
	printf( " Type the range= " );    
	scanf("%d",&n);    
 for(i=1;i<=n;i++)    
	{   c=i; 
    	for( j=1;j<=n-i;j++ )    
            {    
				printf(" ");    
			}	    
		for( k=1;k<=i;k++ )    
			{    
				printf("%d",c); 
				c++;   
			}  
			d=c-1;  
    	for(l=i-1;l>=1;l--)    
        {    
            d--;
            printf("%d",d); 
			;   
		}    
		printf("\n");    
	}
		    
	return 0;
	  
 } 		    

