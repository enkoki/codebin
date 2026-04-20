#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int rev = reverse(num);

    printf("Reversed: %d\n", rev);

    if (num == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}