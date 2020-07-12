#include <stdio.h>
#include <stdlib.h>
void getarray( int * , int);
int smallest( int * , int);

void main(){
    int * ar ,size ,i;  
    printf("\n Enter size of array: ");
    scanf("%d",&size);
    ar = (int*)malloc(size*sizeof(int));
    getarray( ar , size);

    printf("\n The elements of the array are: "); 
    for (i = 0; i < size; ++i) { 
        printf("\n %d ", *(ar+i)); 
    }

    printf("\n Smallest Element : %d \n", smallest( ar ,size));

    free(ar);
    } 

//Dynamically array
void getarray(int * ar, int size){
    int i;
    if (ar == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else
    {
        printf("\n Enter array: ");
        for ( i = 0; i < size; i++)
        {
            printf("\n %d:", i+1);
            scanf("%d" ,ar+i);
        }
        
    }
    
}
//find smallest element
int smallest( int *ar, int size){
    int i, small= *ar;
    for ( i = 1; i < size; i++)
    {
        if( *(ar+i) < small)    small= *(ar+i); 
    }
    return small;
    
}
