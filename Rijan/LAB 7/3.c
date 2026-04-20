#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr;

    printf("Original: %d\n", *ptr);

    ptr++;
    printf("After increment: %d\n", *ptr);

    ptr--;
    printf("After decrement: %d\n", *ptr);

    return 0;
}