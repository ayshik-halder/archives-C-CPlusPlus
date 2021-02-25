//Linear Linked List
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int INFO;
	struct node *NEXT;
};
struct node *FIRST = NULL;
struct node *LAST = NULL;
struct node *searcH(int);
void insertData(int a)
{
	struct node *PTR = (struct node*)malloc(sizeof(struct node));
	PTR->INFO = a;
	if(FIRST == NULL)
	{
		FIRST = LAST = PTR;
		PTR->NEXT = NULL;
		
	}
	else
	{
		LAST->NEXT = PTR;
		PTR->NEXT = NULL;
		LAST = PTR;
	}
}
int deleteData(int a)
{
	struct node *LOC, *TEMP;
	int i;
	i = a;
	LOC = searcH(i);
	if(LOC == NULL)
		return(-9999);
	if(LOC == FIRST)
	{
		if(FIRST == LAST)
			FIRST = LAST = NULL;
		else
			FIRST = FIRST->NEXT;
		return(a);	
	}
	for(TEMP = FIRST; TEMP->NEXT != LOC; TEMP = TEMP->NEXT)
		;
	TEMP->NEXT = LOC->NEXT;
	if(LOC == LAST)
		LAST = TEMP;
	return(LOC->INFO);
}

struct node *searcH(int a)
{
	struct node *PTR;
	if(FIRST == NULL)
		return(NULL);
		
	for(PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
		if(PTR->INFO == a)
			return(PTR);
	
	if(LAST->INFO == a)
		return(LAST);
	else
		return(NULL);
}

void printList()
{
	struct node *PTR;
	if(FIRST == NULL)
	{
		printf("\n\tEmpty List !!");
		return;
	}
	printf("\nLinked list element:\n");
	if(FIRST == LAST)
	{
		printf("%d\t", FIRST->INFO);
		return;
	}
	
	for(PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
		printf("\t%d", PTR->INFO);
	printf("\t%d", LAST->INFO);
}

int main()
{
	int a, b, ch;
	struct node *loc;
	
	while(1)
	{
		printf("\n1 - INSERT,\n2 - DELETE,\n3 - PRINT, \n 4 - EXIT");
		printf("\nEnter your choice : ");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
				printf("\nEnter the Element : ");
				scanf("%d", &a);
				insertData(a);
				break;
			case 2:
				printf("\nEnter the Element to be deleted : ");
				scanf("%d", &a);
				b = deleteData(a);
				if(b == -9999)
					printf("\n%d is not present", a);
				else
					printf("\nElement was deleted");
				break;
			case 3:
				printList();
				break;
			case 4:
				printf("\nRETURN TO HOME");
				exit(0);
		}
	}
}