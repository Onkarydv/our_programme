#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
struct node *head=NULL;
void creatlist(int n);
void displaylist();
void deletefirst();
void deleteAtlast();

int main()
{
    int n;
    printf("Enter the number of nodes :");
    scanf("%d",&n);
    creatlist(n);

    printf(" Data in the list ");
    printf("\n");
    displaylist();
    deletefirst();
    printf("Data after deleted first node ");
    printf("\n");
    displaylist();
    deleteAtlast();
    printf("Data after deleted at last");
    printf("\n");
    displaylist();
    return 0;
}

void creatlist(int n)
{
    struct node *newnode, *temp;
    int i;
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf(" Enter node :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
            head=temp=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;

        }
        
    }
    
} 
void displaylist()
{   struct node *temp;
    temp=head;
    while(temp !=NULL)
    {
       printf(" Data %d\n",temp->data);
       temp=temp->next;
    }
    
}
void deletefirst()
{
    struct node *temp;
    temp=head;
    head=head->next;
    free(temp);
}
void deleteAtlast()
{
   struct node *temp,*prevnode;
   temp=head;
   while(temp->next !=NULL)
   {
    prevnode=temp;
    temp=temp->next;

   }
   if(temp==head)
   {
    head=NULL;
   }
   else
   {
    prevnode->next=0;
   }
   free(temp);
}
