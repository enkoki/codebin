#include <stdio.h>

int main() {
    FILE *fp;
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, num;

    fp = fopen("numbers.txt", "w");

    for (int i = 0; i < n; i++) {
        fprintf(fp, "%d ", arr[i]);
    }
    fclose(fp);

    fp = fopen("numbers.txt", "r");

    printf("Numbers from file:\n");
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("%d ", num);
    }

    fclose(fp);
    return 0;
}