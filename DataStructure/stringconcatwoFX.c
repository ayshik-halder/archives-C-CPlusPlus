#include<stdio.h>
char concat(char s1[50],char s2[50])
{
	int i,l1,l2;
	l1=len(s1);
	l2=len(s2);
	for(i=l1;i<l1+l2;i++)
    		s1[i]=s2[i+l1];
	return s1;
}
int len(char s[])
{ 
int l=0,i;
for(i=0;s[i]!='\0';i++)
  l++;
  return l;
}
int main() {
  char string1[20], string2[20];
 
      printf("Enter two strings: ");
      gets(string1);
      gets(string2);
      
      printf("The concatenated string is %s", concat(string1, string2));
      
   

  return 0;
}
