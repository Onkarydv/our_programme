#include<stdio.h>
#include<string.h>
 struct student{
    int roll;
    float cgpa;
    char name[100];

 };
    int main()
    {
        struct student ece[100];
        ece[0].roll=135;
        ece[0].cgpa=7.5;
       // strcpy(ece[0].name," onkar yadav");

        printf("roll=%d ",ece[0].roll);
        return 0;

    }