#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("Enter your number:");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        factorial=factorial*i;
    }
        printf("Factorial of %d is %d",n,factorial);
    
return 0;

}