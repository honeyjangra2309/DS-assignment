#include<stdio.h>
#include<stdlib.h>
 typedef struct node {
int data;
struct node *left;
struct node *right;
}Node;
int* create()
{
    int x;
 Node* newnode=(Node *)malloc(sizeof( Node));
    printf("enter newnode data(-1 for no data)\n");
    scanf("%d",&x);
    if(x==-1)
    {
        return NULL;
    }
    else{
    newnode->data=x;
    printf(" the left child data is %d\n",newnode->data);
    newnode->left=create();

    printf(" the right child data is %d\n",newnode->data);
    newnode->right=create();
    return(newnode);}
}
void traverse(Node *t)
{
if(!t==NULL)
 {
     printf(" left child data is %d\n",t->data);
     traverse(t->left);
     t=t->right;
 }
 if(!t==NULL)
 {
     printf("right child data is %d\n",t->data);
     traverse(t->right);
 }
}

int main()
{
    Node *root=create();
    printf("root child is %d\n",root->data);
    traverse(root);
    return 0;
}

