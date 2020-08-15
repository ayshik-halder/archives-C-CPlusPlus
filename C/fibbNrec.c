#include<stdio.h>

int main()
{    
    int n;
    
    printf("Enter terms: ");
    scanf("%d", &n);  
	int i ;     
    for( i = 0; i < n; i++)
    {
        printf(" %d ", fibonacci(n));
    }
    
    return 0; 
}
 
 
int fibonacci(int num)
{    
    
    
    if(num == 0 || num == 1)
    {
        return num;
    }
    
    else
       return fibonacci(num-1) + fibonacci(num-2);
}
