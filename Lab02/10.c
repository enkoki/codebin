#include <stdio.h>

int main()
{
    int marks[5], total = 0;
    float percentage;
    for(int i = 0; i < 5; i++)
    {
        printf("Enter marks of subject no. %d:", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = total/5.0;
    printf("Total: %d\n", total);
    printf("Percentage: %f%%\n", percentage);
    return 0;
}