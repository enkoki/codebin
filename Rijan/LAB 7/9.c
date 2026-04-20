#include <stdio.h>

int sum(int *arr, int size) {
    int total = 0;

    for(int i = 0; i < size; i++) {
        total += *(arr + i);
    }

    return total;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int result = sum(arr, 5);

    printf("Sum = %d\n", result);

    return 0;
}