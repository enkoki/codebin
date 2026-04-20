#include <stdio.h>

struct Date {
    int d, m, y;
};

int convertToDays(struct Date dt) {
    return dt.y * 365 + dt.m * 30 + dt.d;
}

int main() {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.d, &d1.m, &d1.y);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.d, &d2.m, &d2.y);

    int days1 = convertToDays(d1);
    int days2 = convertToDays(d2);

    int diff = days1 > days2 ? days1 - days2 : days2 - days1;

    printf("Difference = %d days\n", diff);

    return 0;
}