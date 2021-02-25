#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 16
 
struct emp_data
{
    int  empno;
    char empName[MAX];
    int empage;
	double empsal;
    struct emp_data *next;
};
//insert nodes
struct emp_data *insert(struct emp_data *front, int id, char name[], int age, double sal)
{
    struct emp_data *temp;
    struct emp_data *p;
	p =(struct emp_data*)malloc(sizeof(struct emp_data));
    temp = (struct emp_data*)malloc(sizeof(struct emp_data));
 
    if (temp == NULL)
    {
        printf("\n Allocation failed \n");
        exit(2);
    }
    p->empno = id;
    strcpy(p->empName, name);
    p->empage = age;
    p->empsal = sal;
    p->next = front;
    front = p ;
    return(front);
}
//display list
void printNode(struct emp_data *p)
{
    printf("\n Employee Details...\n");
    printf("\n Emp No       : %d", p->empno);
    printf("\n Name           : %s", p->empName);
    printf("\n Age    : %d", p->empage);
    printf("\n Salary    : %.2f\n", p->empsal);
	printf("-------------------------------------\n");
}
//delete list
struct emp_data* deleteNode(struct emp_data *front, int id)
{
    struct emp_data *ptr;
    struct emp_data *bptr;
 
    if (front->empno == id)
    {
        ptr = front;
        printf("\n Node deleted:");
        printNode(front);
        front = front->next;
        free(ptr);
        return(front);
    }
    for (ptr = front->next, bptr = front; ptr != NULL; ptr = ptr->next,
bptr = bptr->next)
    {
        if (ptr->empno == id)
        {
            printf("\n Node deleted:");
            printNode(ptr);
            bptr->next = ptr->next;
            free(ptr);
            return(front);
        }
    }
    printf("\n Employee Number %d not found ", id);
    return(front);
}
//search list
void search(struct emp_data *front, int key)
{
    struct emp_data *ptr;
 
    for (ptr = front; ptr != NULL; ptr = ptr -> next)
    {
        if (ptr->empno == key)
        {
            printf("\n Key found:");
            printNode(ptr);
            return;
        }
    }
    printf("\n Employee Number %d not found ", key);
}
//display list
void display(struct emp_data  *front)
{
    struct emp_data *ptr;
 
    for (ptr = front; ptr != NULL; ptr = ptr->next)
    {
        printNode(ptr);
    }
}
//menu function
void menu()
{
    printf("---------------------------------------------\n");
    printf("Press 1 to INSERT an Employee Detail into the list       \n");
    printf("Press 2 to DELETE an Employee Detail from the list       \n");
    printf("Press 3 to DISPLAY the list                 \n");
    printf("Press 4 to SEARCH the list                   \n");
    printf("Press 5 to EXIT                              \n");
    printf("---------------------------------------------\n");
}


char option()
{
    char choice;
 
    printf("\n\n>> Enter your choice: ");
    switch(choice=getche())
    {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':   return(choice);
        default :   printf("\n Invalid choice.");
    }
    return choice;
}

void main()
{
    struct emp_data *linkList;
    char name[16];
    char choice;
    int eno,age;
    double sal;
 
    linkList = NULL;
    printf("\n ____ Welcome to BANK DATABASE ____ \n");
    menu();
    do
    {
     
        choice = option();
        switch(choice)
        {
        case '1':
            printf("\n Enter the Employee ID      : ");
            scanf("%d", &eno);
            printf("Enter the Employee name        : ");
            fflush(stdin);
            gets(name);
            printf("Enter the Employee Age : ");
            scanf("%d", &age);
            printf("Enter the Employee Sal : ");
            scanf("%lf", &sal);
            linkList = insert(linkList, eno, name, age ,sal);
            break;
        case '2':
            printf("\n\n Enter the employee number to be deleted: ");
            scanf("%d", &eno);
            linkList = deleteNode(linkList, eno);
            break;
        case '3':
            if (linkList == NULL)
            {
                printf("\n List empty.");
                break;
            }
            display(linkList);
            break;
        case '4':
            printf("\n\n Enter the employee number to be searched: ");
            scanf("%d", &eno);
            search(linkList, eno);
            break;
        case '5': break;
        }
    } while (choice != '5');
}

















