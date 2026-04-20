#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt", "a");
    char text[100];

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}