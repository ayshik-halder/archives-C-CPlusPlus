//In a small company there are five salesmen. Each salesman is supposed to sell three
// products. Write a program using to print (i) the total sales by each salesman
// and (ii) total sales of each item.


#include<stdlib.h>
#include<stdio.h>
 
 struct structsales
 {
     int * Pdt;
 };

 void main(){

     printf("\n Enter no. of Salesman : ");
     int n, i, j, sum = 0;
     scanf(" %d ", &n);
     struct structsales s[n];
     printf(" \n Enter prices of the products sold by each salesman");
     for ( i = 0; i < n; i++)
     {
         printf("\n %d Salesman:: ", i+1);
         for ( j = 0; j < 3; j++)
         {
            printf("\n Enter selling price of item no. %d :",j+1);
            scanf("%d", &s[i].Pdt[j]);
         }
     }
    for ( i = 0; i < n; i++)
     {
         printf("\n %d Salesman:: ", i+1);
         
         for ( j = 0; j < 3; j++)
         {
             sum+=s[i].Pdt[j];
         }
         printf("\n Total Sales : %d ", sum);
         sum = 0;
     }
 }
 