#include <stdio.h>
int compare(char [], char []);
int main()
{
   char a[100], b[100];
   printf("Input a string\n");
   gets(a);
   printf("Input a string\n");
   gets(b);
    if (compare(a, b) == 0)
      printf("Equal strings.\n");
   else
   	  printf("Not Equal strings. \n");
	return 0;
}  
 int compare(char a[], char b[])
{
   int c = 0;
   while (a[c] == b[c] || (a[c]>65 && a[c]<122 && b[c]>65 && b[c]<122 && a[c] == b[c]+32) || ( a[c]>65 && a[c]<122 && b[c]>65 && b[c]<122 && a[c]+32 == b[c] ))
   {
      if (a[c] == '\0' || b[c] == '\0')
         break;
      c++;
   }  
   if (a[c] == '\0' && b[c] == '\0')
      return 0;
   else
      return -1;
}


