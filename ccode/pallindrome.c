#include<stdio.h>

int main()
{   int n, i, j;
    printf("enter size of array ");
    scanf("%d", &n);

    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }      

    i = 0;
    j = n - 1;

    int flag = 1;
    while(i < j){
        if (arr[i] != arr[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }
    if(flag ) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
    
}
