#include <stdio.h>

int sumDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Sum of digits: %d", sumDigits(num));

    return 0;
}