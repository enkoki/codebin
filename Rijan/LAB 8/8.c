#include <stdio.h>

int main() {
    FILE *fp = fopen("students.txt", "r");
    char name[50];
    int roll;
    float marks;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Student Details:\n");
    printf("-------------------------\n");

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}