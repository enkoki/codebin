#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(fp, "Hello, World!");
    fclose(fp);

    printf("File created and written successfully.\n");
    return 0;
}