#include <stdio.h>
#include <stdlib.h>
void getarray( int * , int);
int smallest( int * , int);
int largest( int * , int);
void interchange(int *,int ,int );

void main(){
    int * ar ,size ,i;  
    printf("\n Enter size of array: ");
    scanf("%d",&size);
    ar = (int*)malloc(size*sizeof(int));
    getarray( ar , size);

    printf("\n The elements of the array BEFORE interchange are: "); 
    for (i = 0; i < size; ++i) { 
        printf("\n %d ", *(ar+i)); 
    }

    interchange( ar , smallest( ar, size), largest( ar, size));

    printf("\n The elements of the array AFTER interchange are: "); 
    for (i = 0; i < size; ++i) { 
        printf("\n %d ", *(ar+i)); 
    }
    free(ar);
    } 

//Dynamically storing in array
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
//find smallest element position
int smallest( int *ar, int size){
    int i, flag = 0, small= *ar;
    for ( i = 1; i < size; i++)
    {
        if( *(ar+i) < small){
            small = *(ar+i);
            flag = i;
        }
    }
    return flag;
}
//find largest element position
int largest( int *ar, int size){
    int i, flag = 0, large= *ar;
    for ( i = 1; i < size; i++)
    {
        if( *(ar+i) > large){
            large = *(ar+i);
            flag = i;
        }
    }
    return flag;
}
//interchange max element with min element
void interchange( int * ar, int small, int large)
{
    int temp;
    temp = *( ar+ small);
    *( ar+ small) = *( ar+ large);
    *( ar+ large) = temp;
}


