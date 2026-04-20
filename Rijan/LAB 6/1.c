#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
    struct Student s[2];
    float avg = 0;

    for(int i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);
        avg += s[i].total_marks;
    }

    printf("\nStudent Details:\n");
    for(int i = 0; i < 2; i++) {
        printf("%s, Age: %d, Marks: %.2f\n", s[i].name, s[i].age, s[i].total_marks);
    }

    printf("Average Marks = %.2f\n", avg / 2);
    return 0;
}