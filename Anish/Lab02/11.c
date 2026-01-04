#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Their values have been swapped\n");
    printf("a:%d \t b:%d\n", a, b);
    return 0;
}