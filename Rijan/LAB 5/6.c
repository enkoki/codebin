#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[5] = {2, 8, 1, 10, 5};

    printf("Max = %d", findMax(arr, 5));

    return 0;
}