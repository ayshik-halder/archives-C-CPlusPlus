#include<stdio.h>

int main()
{
 
    int n;
    printf("Enter  number: ");
    scanf("%d", &n);
    printf("Enter Power: ");
    printf("\nSum = %d", add(n));
    return 0;
}

int add(int n) 
  {
    if (n != 0)
        return n + add(n - 1);
    else
        return n;
  }

