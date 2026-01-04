#include <stdio.h>

int main()
{
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    printf("Number up to two decimal places: %.2f\n", num);

    return 0;
}