#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter temperature in celsius: ");
    scanf("%f", &a);
    b = (1.8 * a) + 32;
    printf("Temperature in fahrenheit: %f\n", b);
    return 0;
}