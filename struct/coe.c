#include<stdio.h>
#include<string.h>

typedef struct student{
    int roll;
    float cgpa;
    char* name[100];
}

coe;

int main()
{
    coe s1;
    s1.roll=332;
    s1.cgpa=3.4;
    s1.name[10]= "onkar yadav";
    // s1.name=onkaryadav;
    printf("student roll number is %f\n",s1.cgpa);
   
    //strcpy(s1.name[0],"yadav");
    printf("name is %s ", s1.name[10]);
    return 0;
}
