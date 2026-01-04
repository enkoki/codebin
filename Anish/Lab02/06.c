#include <stdio.h>

typedef struct{
    char name[100];
    int rollno;
} students;

int main()
{   
    students student;
    printf("Enter name: ");
    scanf("%s", &student.name);
    printf("Enter roll no: ");
    scanf("%d", &student.rollno);
    printf("Name        Rollno\n");
    printf("%s %8d\n", student.name, student.rollno);
    return 0;
}