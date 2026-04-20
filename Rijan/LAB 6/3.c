#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[3];
    int max = 0, min = 0;

    for(int i = 0; i < 3; i++) {
        printf("Enter book %d details:\n", i+1);
        printf("Title: ");
        scanf(" %[^\n]s", b[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", b[i].author);
        printf("Price: ");
        scanf("%f", &b[i].price);
    }

    for(int i = 1; i < 3; i++) {
        if(b[i].price > b[max].price) max = i;
        if(b[i].price < b[min].price) min = i;
    }

    printf("\nMost Expensive Book:\n%s by %s - %.2f\n",
           b[max].title, b[max].author, b[max].price);

    printf("\nCheapest Book:\n%s by %s - %.2f\n",
           b[min].title, b[min].author, b[min].price);

    return 0;
}