
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0;

    int temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int rem = temp % 10;
        sum += rem*rem*rem;
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");

    return 0;
}