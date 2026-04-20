#include <stdio.h>

struct Time {
    int h, m, s;
};

int main() {
    struct Time t1, t2, result;

    printf("Enter first time (h m s): ");
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);

    printf("Enter second time (h m s): ");
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);

    result.s = t1.s + t2.s;
    result.m = t1.m + t2.m + result.s / 60;
    result.s %= 60;

    result.h = t1.h + t2.h + result.m / 60;
    result.m %= 60;

    printf("Result = %02d:%02d:%02d\n", result.h, result.m, result.s);

    return 0;
}