#include<stdio.h>
#include<string.h>
void printstring(char arr[]);

int main()
{
    char str[100];
    fgets(str,100,stdin);
   puts(str);
    return 0;
}
void printstring(char arr[]){
    
    
     
     for(int i=0; arr[i] !='\0'; i++){
     printf("%c ",arr[i]);
    }
    printf(" \n ");
}