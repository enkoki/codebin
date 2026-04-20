#include <stdio.h>

int countWords(char str[]) {
    int count = 0, i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
            count++;
        i++;
    }

    return count + 1;
}

int main() {
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    printf("Word count: %d", countWords(str));

    return 0;
}