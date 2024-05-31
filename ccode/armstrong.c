#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter your number:");
    scanf("%d",&n);
    temp=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    {
       printf("your number  is armstrong");
    }
    else
    {
       printf("your number  is not armstrong");
    }

return 0;
}