#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*a,i,s=0;
    printf("Enter no. of element of array:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int));
    if(a==NULL)
    {
        printf(" memory allocation unsuccessful");
    }
   printf("\n Enter the array elements one by one");
     for(i=0; i<=n; ++i)
     {
        scanf("%d",&a[i]);

        s+=a[i];
        

     }
     printf(" sum of array %d ",s);
     printf("\n%d",i);
     return 0;
}