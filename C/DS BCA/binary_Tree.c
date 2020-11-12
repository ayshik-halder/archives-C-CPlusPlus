//Binary tree traversal:
 
#include <stdio.h>
#include <malloc.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
 
    void insert(struct node **,int);
    void inorder(struct node *);
    void postorder(struct node *);
    void preorder(struct node *);
  
void main()
{
    struct node *ptr;
    int no,i,num;
 
    ptr = NULL;
    ptr-> data ;
    printf("\nProgram for Tree Traversal\n");
    printf("Enter the number of nodes to add to the tree.<BR>\n");
    scanf("%d",&no);
 
    for(i=0;i<no;i++)
    {
        printf("Enter the item\n");
        scanf("%d",&num);
        insert(&ptr,num);
    }
 
    printf("\nINORDER TRAVERSAL\n");
    inorder(ptr);
}
 
void insert(struct node **p,int num)
{
    if((*p)==NULL)
    {
        printf("Leaf node created.");
        (*p)=malloc(sizeof(struct node));
        (*p)->left = NULL;
        (*p)->right = NULL;
        (*p)->data = num;
        return;
    }
    else
    {
        if(num==(*p)->data)
        {
            printf("\nREPEATED ENTRY ERROR VALUE REJECTED\n");
            return;
        }
        if(num<(*p)->data)
        {
            printf("\nDirected to left link.\n");
            insert(&((*p)->left),num);
        }
        else
        {
            printf("Directed to right link.\n");
            insert(&((*p)->right),num);
        }
    }
    return;
}
 
void inorder(struct node *p)
{
    if(p!=NULL)
    {
        inorder(p->left);
        printf("\nData :%d",p->data);
        inorder(p->right);
    }
    else
    return;
}
 
 