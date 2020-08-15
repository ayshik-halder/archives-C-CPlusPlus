
 
#include<stdio.h>

long long int power(long long int n1,long long int n2);

int main()
{
 
    long long int base, exp;
    printf("Enter base number: ");
    scanf("%lld", &base);
    printf("Enter Power: ");
    scanf("%lld", &exp);
    printf("\n%lld^%lld = %lld", base, exp, power(base, exp));
    return 0;
}

long long int power(long long int b,long long  int e)
{
    if(e == 0)
        return 1;
    
    long long int x=(b*power(b, e-1));
    printf("%lld \n ",x);
        
    return x;
}

