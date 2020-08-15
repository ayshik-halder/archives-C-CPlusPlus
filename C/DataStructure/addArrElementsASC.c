#include<stdio.h>
#include<stdlib.h>
void main()
{
    int ar[100], size = 0, num = 0, i = 0, j = 0;
    printf("\n Enter Size of Array: ");
    scanf("%d", &size);
    printf("\n Enter the elements(Ascending) in array : \n");
    for( i = 0; i < size; i++){
        printf("\n %d th element: ", i+1 );
        scanf("%d",&ar[i]);
    }
    printf("\n Enter Element To be added : ");
    scanf("%d",&num);
    for ( i = 0; i < size; i++){
        if(ar[i]>num){
            for( j = size-1; j >= i; j--){
                ar[j+1] = ar[j];
            }
            ar[i]=num;
            break;
        }
    }
    size += 1;
    printf("\n Elements Now in the array : \n");
    for ( i = 0; i < size ; i++)
    {
        printf("\n %d th element : %d ", i+1, ar[i]);
    }
}
