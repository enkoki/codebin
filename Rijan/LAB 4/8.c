#include <stdio.h>

int main() {
    int r, c, a[10][10], b[10][10], sum[10][10], diff[10][10], prod[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Addition & Subtraction
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    // Multiplication
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            prod[i][j] = 0;
            for(int k = 0; k < c; k++) {
                prod[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nSum Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("\nDifference Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    printf("\nProduct Matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}