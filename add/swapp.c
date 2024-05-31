#include<stdio.h>
int main()
{
    int a=5,b=6,temp;
    temp=a;
    a=b;
    b=temp;
    printf("swapping of two number a=%d and \n b=%d",a,b);
    return 0;
}