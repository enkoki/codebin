#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "r");
    char ch;

    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}