#include<stdio.h>
int main()
{
    int a, b, c ;
    printf("Enter two numbers : ") ;
    scanf("%d %d", &a, &b) ;
    printf("\nBefore swapping : \n\n") ;
    printf("a = %d \t b = %d", a, b) ;

    /* Swapping Two Numbers Logic */
    c = a ;
    a = b ;
    b = c ;
    printf("\n\nAfter swapping : \n\n") ;
    printf("a = %d \t b = %d", a, b) ;
    return 0; 
}

