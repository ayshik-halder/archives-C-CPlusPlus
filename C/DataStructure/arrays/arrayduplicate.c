#include <stdio.h>
#include <stdlib.h>
void getarray( int * , int);
void duplicate( int * , int);

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

    duplicate( ar ,size);
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

//Check for Duplicates
void duplicate(int * ar, int size){
    int i, j, flag=0;
    for( i=0; i < size ; i++ )
    {
        for ( j = i+1; j < size; j++)
        {
           if(*(ar+i)==*(ar+j)){
               flag=1;
               printf("\n Duplicate Elements found at %d and %d", i+1, j+1);
           }
        }
        if ( flag == 0)
        {
            printf("\nNo Duplicates Foound \n");            
        }
        

    }
}
