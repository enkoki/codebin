#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i * i <= n; i++) {
        if (i * i == n) {
            printf("Perfect Square");
            return 0;
        }
    }
    printf("Not a Perfect Square");
    return 0;
}
