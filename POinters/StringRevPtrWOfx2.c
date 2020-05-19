#include<stdio.h>
#include<string.h>
 
void reverse(char*);
 
main() 
{
   char s[100];
 
   printf("Enter a string\n");
   gets(s);
 
   reverse(s);
 
   printf("Reverse of the string is \"%s\".\n", s);
 
   return 0;
}
 
void reverse(char *s) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = strlen(s);
   begin  = s;
   end    = s;
 
   for (c = 0; c < length - 1; c++)
      end++;
 
   for (c = 0; c < length/2; c++)
   {        
      temp   = *end;
      *end   = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}
 

