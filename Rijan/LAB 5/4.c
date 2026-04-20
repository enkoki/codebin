#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32], i = 0;

    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int num;
    printf("Enter decimal number: ");
    scanf("%d", &num);

    decimalToBinary(num);

    return 0;
}