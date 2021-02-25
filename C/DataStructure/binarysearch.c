#include <stdio.h>   
int main() 
{ 
    int arr[100];
    int i,z,x,n,r,l;
    printf("Enter no. of element: ");
    scanf("%d",&z);
	printf("Enter element: ") ;
	for(i=0;i<z;i++)
	scanf("%d",&arr[i]);

	
	bubble_sort(arr, z);          //Bubble sorting
	printf("The sorted array:\n");
       for (i = 0; i < z; i++)
     printf("%d\t", arr[i]);

    printf("Enter element to search: ");
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
         if(arr[m] < x) 
		{
            l = m + 1; 
        
         }
        else {
		
            r = m - 1; 
      	}
 	}
     if(l>r)
     printf("Element not found");
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

