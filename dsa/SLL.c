#include<stdio.h>
#include<stdlib.h>


struct node
{
    int item;
    struct node*next;
};

void insertatlast(struct node **s,int data)
{
    struct node *newnode, *temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=data;
    newnode->next=NULL;

    if(*s==NULL)
       *s=newnode;
    else
    {
        temp= *s;
          while(temp->next !=NULL)
             temp=temp->next;

               
    temp->next=newnode;

    }
}

void viewlist(struct node *start)
{
    while(start)
    {
        printf("%d ",start->item);
        start=start->next;
    }
}

void deletefirst(struct node **s)
{
    struct node *temp;
    if(*s!=NULL)
    {
        temp=*s;
        *s=temp->next;
        free(temp);
    }
}


int main()
{
    struct node *start=NULL ;
    insertatlast(&start,25);
    insertatlast(&start,35);
    insertatlast(&start,40);
    insertatlast(&start,56);
    insertatlast(&start,60);
    insertatlast(&start,70);
    viewlist(start);
    printf(" \n ");
    deletefirst(&start);
    viewlist(start);
    return 0;

}