#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist.\n");
    } else {
        printf("File exists.\n");
        fclose(fp);
    }

    return 0;
}