#include <stdio.h>
#include <conio.h>
int main()
{
    char name[50], gender[30];
    int age;
    float marks;    
    printf("Enter your name, age, gender and marks:");
    gets(name);
    scanf("%d %s %f",&age,gender,&marks);
    printf("Your name is %s. Your gender is %s. Your age is %d. Your marks is %.2f",name,gender,age,marks);
    return 0;
}