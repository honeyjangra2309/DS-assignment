#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
}*root=NULL;
struct node *createnode()
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the node data");
    scanf("%d",&newnode->data);
    if(newnode->data==-1)
        return NULL;
    else
    {
        newnode->left=NULL;
        newnode->right=NULL;
        return newnode;
    }
}
struct node *createtree()
{
    struct node *t=createnode();
    if(t==NULL)
        return NULL;
    else
    {
        printf("%d",t->data);
        t->left=createtree();
        printf("%d",t->data);
        t->right=createtree();
        return t;
    }
}
void traverseinorder(struct node *t)
{
    if(t->left!=NULL)
        traverseinorder(t->left);
        printf("%d",t->data);
    if(t->right!=NULL)
        traverseinorder(t->right);
}
void traversepreorder(struct node *t)
{
     printf("%d",t->data);
    if(t->left!=NULL)
        traverseinorder(t->left);
    if(t->right!=NULL)
        traverseinorder(t->right);
}
void traversepostorder(struct node *t)
{
    if(t->left!=NULL)
        traverseinorder(t->left);
    if(t->right!=NULL)
        traverseinorder(t->right);
        printf("%d",t->data);
}
void main()
{
    root=createtree();
    printf("inorder:");
    traverseinorder(root);
    printf("\npreorder:");
    traversepreorder(root);
    printf("\npostorder:");
    traversepostorder(root);
}

