#include<stdio.h>
int main()
{
    int a, b ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &a, &b) ;
    printf("\nBefore swapping : \n\n") ;
    printf("a = %d \t b = %d", a, b) ;

    /* Swapping Two Numbers Logic */
    a= a-b;
    b= a+b;
    a= b-a ;
    printf("\n\nAfter swapping : \n\n") ;
    printf("a = %d \t b = %d", a, b) ;
    return 0; 
}

