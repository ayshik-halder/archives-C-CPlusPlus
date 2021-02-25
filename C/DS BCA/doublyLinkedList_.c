#include<stdio.h>
#include<stdlib.h>

struct dlNode
{
	int INFO;
	struct dlNode *NEXT;
	struct dlNode *PREVIOUS;
};

struct dlNode *FIRST = NULL;
struct dlNode *LAST = NULL;
struct dlNode *searcH(int);

int main()
{
	int a, b, ch;
	
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
	return 0;
}

void insertData(int a)
{
	struct dlNode *PTR = (struct dlNode*)malloc(sizeof(struct dlNode));
	PTR->INFO = a;
	if(FIRST == NULL)
	{
		FIRST = LAST = PTR;
		PTR->NEXT = NULL;
		PTR->PREVIOUS = NULL;
	}
	else
	{
		LAST->NEXT = PTR;
		PTR->NEXT = NULL;
		PTR->PREVIOUS = LAST;
		LAST = PTR;
	}
}
struct dlNode *searcH(int a)
{
	struct dlNode *PTR;
	if(FIRST == NULL)
		return(NULL);
		
	if(FIRST == LAST && FIRST->INFO == a)
		return(FIRST);
	
	for(PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
		if(PTR->INFO == a)
			return(PTR);
	
	if(LAST->INFO == a)
		return(LAST);
	else
		return(NULL);
}
int deleteData(int a)
{
	struct dlNode *LOC, *TEMP;
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
		{
			FIRST->NEXT->PREVIOUS = NULL;
			FIRST = FIRST->NEXT;
		}
		return(a);
	}
	for(TEMP = FIRST; TEMP->NEXT != LOC; TEMP = TEMP->NEXT)
		;
	if(LOC == LAST)
	{
		LAST = TEMP;
		TEMP->NEXT = NULL;
	}
	else
	{
		TEMP->NEXT = LOC->NEXT;
		LOC->NEXT->PREVIOUS = TEMP;
	}
	return(LOC->INFO);
}
void printList()
{
	struct dlNode *PTR;
	if(FIRST == NULL)
	{
		printf("\n\tEmpty LIst !!");
		return;
	}
	printf("\nDoubly Linked list element:\n");
	if(FIRST == LAST)
	{
		printf("%d\t", FIRST->INFO);
		return;
	}
	for(PTR = FIRST; PTR != LAST; PTR = PTR->NEXT)
		printf("\t%d", PTR->INFO);
	printf("\t%d", LAST->INFO);
}
