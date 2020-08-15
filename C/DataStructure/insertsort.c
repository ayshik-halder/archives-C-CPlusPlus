#include <math.h> 
#include <stdio.h> 
void insertionSort(int arr[], int n) 
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
	 { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key) 
		{ 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}
void print(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
int main() 
{ 
    int arr[50],n,i;
    printf("\n ENTER Size ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    insertionSort(arr, n); 
    print(arr, n); 
  
    return 0; 
}
