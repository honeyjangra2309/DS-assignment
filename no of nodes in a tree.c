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
}
static int count=0;
int countnodes(Node *root)
{
    if(root!=NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }

}
int main()
{
    Node *root=create();
    printf("root child is %d\n",root->data);
    printf("no of nodes are %d\n",countnodes(root));
    return 0;
}
