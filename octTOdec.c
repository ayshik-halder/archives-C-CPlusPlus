#include <stdio.h>
#include <math.h>
int main()
{
	int i=0,b=0;
    long long int oct,dec=0;
    printf("Enter Oct:  ");
    scanf("%lld", &oct);
    while (oct != 0)
    {
    	b=(oct % 10);
        dec =  dec + b*pow(8,i++);
        oct=oct/10;
    }
    printf("Decimal Equiv: %lld",dec);
    return 0;
}
