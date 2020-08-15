#include<stdio.h>

void main(){
    int ar[100], size, i, j, num;
    printf("\n Enter Size of Array: ");
    scanf("%d",&size);
    printf("\n Enter the elements(Ascending) in array : \n");
        for( i = 0; i < size; i++){
            printf("\n %d th element: ", i+1 );
            scanf("%d",&ar[i]);
        }
    printf("\n Enter Element To be deleted : ");
    scanf("%d",&num);
    for ( i = 0; i < size; i++)
    {
        if(ar[i]==num){
            for ( j = i; j < size-1; j--)
                {
                    ar[j]=ar[j+1];
            }
        }
    }
    size -= 1;
    printf("\n Elements Now in the array : \n");
        for ( i = 0; i < size ; i++){
            printf("\n %d th element : %d ", i+1, ar[i]);
        }
}