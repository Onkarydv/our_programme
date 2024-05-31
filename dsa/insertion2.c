#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[50],size,num,pos,i;
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter the element of array: ");
    for(int i=0;i<size;i++){
       scanf("%d",&a[i]);
    }
    printf("Enter the data you wanted to insert: ");
       scanf("%d",&num);
    printf(" Enter the  position where insert : ");
       scanf("%d",&pos);

 if(pos <=0 || pos > size+1)
 
    printf("invalid position");
 else
 { 
    for(int i=size-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];

    }
    a[pos-1]=num;
    size++;
    for(int i=0;i<size;i++){
       printf("%d ",a[i]);
    }  
 }
 return 0;


}