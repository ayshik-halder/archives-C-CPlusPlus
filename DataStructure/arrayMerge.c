#include<stdio.h>
void main(){

    int ar1[100], ar2[100], ar3[100], i, j, k = 0, s1, s2, s3;

//input first array
    printf("\n Enter Size of Array1: ");
    scanf("%d", &s1);
    printf("\n Enter the elements in array : \n");
    for( i = 0; i < s1; i++){
        printf("\n %d th element: ", i+1 );
        scanf("%d",&ar1[i]);
    }

//input second array
    printf("\n Enter Size of Array: ");
    scanf("%d", &s2);
    printf("\n Enter the elements in array : \n");
    for( i = 0; i < s2; i++){
        printf("\n %d th element: ", i+1 );
        scanf("%d",&ar2[i]);
    }

    s3 = s1 + s2;

    for ( i = 0; i < s1; i++)
    {
        ar3[k++]=ar1[i];
    }

    for ( i = 0; i < s2; i++)
    {
        ar3[k++]=ar2[i];
    }

//print merged array
    printf("\n The merged array is");
    for(i = 0; i < s3; i++)		
        printf("\n %d th element : %d ", i+1, ar3[i]);
     
 }