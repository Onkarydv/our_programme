#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int main()
{
    char name[50];
    scanf("%s", name);
    printf("your name is %s \n ",name);
    printstring(name);
    return 0;

}
void printstring(char arr[])
{
    for(int i = 0; arr[i] != '\0'; i++)
    {   
        printf("%c",arr[i]);
    }
}