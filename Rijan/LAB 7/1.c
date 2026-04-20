#include <stdio.h>

int main() {
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value of a using pointer: %d\n", *ptr);

    return 0;
}