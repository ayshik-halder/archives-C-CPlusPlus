#include<stdio.h>
void add(int a, int b)
{
	printf("%d",a+b);
}
void add(int a)
{
	printf("&d",a);
}
void main()
{
	add(2,3);
	add(2)
}
