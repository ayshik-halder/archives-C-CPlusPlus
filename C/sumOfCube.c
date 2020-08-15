/*
 * C Program to Find the Sum of Series 1^3 + 2^3 + 3^3 + … + n^3
 */
#include <stdio.h>
#include <math.h>
 
int main()
{
    int number, i;
    int sum = 0;
 
    printf("Enter the maximum values of series n: ");
    scanf("%d", &number);
    sum = pow(((number * (number + 1) ) / 2),2);
    printf("Sum of the series : ");
    for (i = 1; i <= number; i++)
    {
        if (i != number)
            printf("%d^3 + ", i);
        else
            printf("%d^3 = %d ", i, sum);
    }
    return 0;
}
