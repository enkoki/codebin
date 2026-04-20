#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[3];
    int max = 0;

    for(int i = 0; i < 3; i++) {
        printf("Enter employee %d details:\n", i+1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    for(int i = 1; i < 3; i++) {
        if(e[i].salary > e[max].salary)
            max = i;
    }

    printf("\nHighest Salary Employee:\n");
    printf("ID: %d, Name: %s, Salary: %.2f\n",
           e[max].id, e[max].name, e[max].salary);

    return 0;
}