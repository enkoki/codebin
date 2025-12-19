// Write a program to input a student’s name and roll number and display them in a formatted output.

#include <stdio.h>
int main(){

    char name[25];
    int roll_no;
    printf("Enter your name: ");
    scanf("%[^\n]s", name);
    printf("Enter your roll no: ");
    scanf("%d", &roll_no);

    printf("\nName: %s\nRoll no: %d", name, roll_no);
    
    return 0;
}