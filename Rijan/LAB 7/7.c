#include <stdio.h>

void modify(int *x) {
    *x = *x + 10;
}

int main() {
    int a = 5;

    modify(&a);

    printf("Modified value: %d\n", a);

    return 0;
}