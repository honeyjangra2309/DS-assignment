#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
}*head;
int main()
{
  createnode();
  deletenode();

}
void createnode(int n)
{
    int i;
    int data;
    struct node *temp;
    head=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("enter first node data\n");
        scanf("%d",&data);
        head->data=data;
        head->link=NULL;
        temp=head;}
    for( i=2;i<=5;i++)
    {
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("new node not created\n");
            break;
        }
        else{
            printf("enter other nodes data\n");
        scanf("%d",&data);
        newnode->data=data;
        newnode->link=NULL;
        temp->link=newnode;
        temp=temp->link;}}
        printf("list created successfully\n");
}
void traversenode(int n)
{
    int i=1;
    struct node *temp=head;
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->link;
        i++;
    }
}
void deletenode(int n)
{
    int i=1,data,loc,l;
    struct node *temp=head;
    struct node *q;
    printf("enter the location\n");
    scanf("%d",&loc);
    printf("enter number of nodes\n");
    scanf("%d",&l);
    if(loc>l)
        printf("invalid location\n");
    else if(loc==1)
    {
        temp=head;
        head=temp->link;
        temp->link=NULL;
        free(temp);
    }
    else
        while(i<loc-1)
    {
        temp=temp->link;
        i++;
    }
    q=temp->link;
    temp->link=q->link;
    temp=head;
      while(temp)
    {
        printf("%d",temp->data);
        i++;
        temp=temp->link;
    }

}
