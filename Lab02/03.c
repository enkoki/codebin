#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    printf("Sum: %d\n", a + b);
    if(a > b)
    {
        printf("Difference: %d\n", a - b);
    }
    else
    {
        printf("Difference: %d\n", b - a);
    }
    printf("Product: %d\n", a * b);
    printf("Quotient: %f\n", a / (float)b);
    
    return 0; 
}