#include<stdio.h>
#include<stdlib.h>

//void creatlist(int n);
//void displaylist();

 struct node
 {
    int data;
    struct node *next;
 };
    int head;
 void creatlist() 
 {  
    struct node *newnode,*temp;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter node :");
   scanf("%d",&newnode->data);
   newnode->next=NULL;
  
  if(head==NULL)
  {
    head=temp=newnode;
  }
else
{
   temp->next=newnode;
   temp=newnode;
}
 }
 
 void displaylist()
 {  
   int temp;
   temp=head;
   while(temp!=NULL)
   {
    int temp;
    printf("%d",temp->data);
    temp=temp->next;
   }
 }
  int main()
 {   
    int n,i;
    struct node *head=NULL;
   

    return 0;
 }
