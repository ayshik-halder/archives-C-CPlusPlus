#include <stdio.h>
#include <string.h>
 
void Pal(char[],int);
 
int main()
{
    char ar[50];
    printf("Enter a string \n");
    scanf("%s", ar);
    Pal(ar,0);
    return 0;
}
 
void Pal(char ar[], int i)
{
    int l=strlen(ar)-1-i;
    
    if (ar[i]==ar[l])
    {
        if (i+1==l||i==l)
        {
            printf("The entered word is a palindrome\n");
            return;
        }
        Pal(ar,i+1);
    }
    else
    {
        printf("The entered word is not a palindrome\n");
    }
}
