#include<stdio.h>

int main()
{
 
    int n;
    printf("Enter  number: ");
    scanf("%d", &n);
    printf("\nfact = %d", fact(n));
    return 0;
}

int fact(int n) 
  {
    if (n != 1)
        return n * fact(n - 1);
    else
        return n;
  }
