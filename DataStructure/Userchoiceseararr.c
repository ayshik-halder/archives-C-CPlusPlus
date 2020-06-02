#include <stdio.h> 

void bubble_sort(int a[], int n);
void linear_search(int a[],int n);

  
int main() 
{ 
    int arr[100];
    int i,z,x,n,r,l,f1;
    int ch;
    printf("Enter no. of element");
    scanf("%d",&z);
	printf("Enter element") ;
	for(i=0;i<z;i++)
	scanf("%d",&arr[i]);

    printf("\n\n1. Linear Search \n\n 2. Binary Search \n\n ?");
    
    scanf("%d",&ch);
    
    if(ch==1)
    {
     printf("\n-_-_-_-Initiating Linear Search-_-_-_-\n");
     linear_search(arr, z);
	 return 0;
	}
else if(ch==2){
		
	bubble_sort(arr, z);           
	printf("\nThe sorted array:\n");
       for (i = 0; i < z; i++)
     printf("%d\t", arr[i]);
    
    printf("\nEnter element to search");
	scanf("%d",&x);
	
	r=z-1;                     //Binary searching
	l=0;
   
   while (l <= r) 
	{ 
        int m = (l + r)/ 2; 
        if (arr[m] == x) 
            {
			printf("\nElement found at %d",m+1);
			
			break;
            }
        if (arr[m] < x) {
            l = m + 1; 
        
         }
        else {
		
            r = m - 1; 
      	}
 	}
     if(l>r)
     printf("\nElement not found");
     return 0;
	 }
	 
	 else
	    printf("\nWrong Choice");
	    return 0;
   
} 

void bubble_sort(int a[], int n)
 {
    int i = 0, j = 0, tmp;
                                   //bubble sort algorithm
    for (i = 0; i < n; i++) 
	{   
        for (j = 0; j < n - i - 1; j++) 
		{   
            if (a[j] > a[j + 1]) 
			{  
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

void linear_search(int a[],int n)
{  
	int f=0,i,x;
	printf("\n Enter element to search");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	 {  
	        if(a[i]==n)
	        { 
	              f=1;
			}
			
	 }
	 if(f==1)
	  	printf("\nElement  found");
	 else 
	    printf("\n\nElement not Found");
	 
}




