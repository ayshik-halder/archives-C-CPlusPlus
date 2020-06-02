#include<stdio.h>
#include<stdlib.h>
struct node  * getnode(int );
 struct node
{
	int x;
	struct node *p;
};

struct node  * getnode(int x)
{
	struct node *a;
	a=(struct node *)malloc(sizeof(struct node));
	a->x=x;
	a->p=NULL;
	return a;
}
  
main()
{
	int x,i;
	struct node *head , *temp;
	temp=head;
	while(i<5)
	{	
		scanf("%d",&x);
		temp=getnode(x);
		temp->x=x;
		head=temp;
		temp->p=NULL;
		head->p=temp;
	    i++;
}
	while(temp!=NULL)
	{
		printf("\n %d",temp->x);
		temp=temp->p;
		
	}
	free(head);
}

