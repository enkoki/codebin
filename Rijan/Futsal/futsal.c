#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Booking {
    int id;
    char name[50];
    char phone[15];
    char date[20];
    char time[10];
};

void addBooking() {
    FILE *fp = fopen("bookings.txt", "a+");
    struct Booking b;

    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return;
    }

    printf("\n--- New Booking ---\n");
    printf("Enter ID: ");
    scanf("%d", &b.id);
    
    printf("Enter Name: ");
    scanf(" %[^\n]s", b.name);

    printf("Enter Phone: ");
    scanf("%s", b.phone);

    printf("Enter Date: ");
    scanf("%s", b.date);

    printf("Enter Time: ");
    scanf("%s", b.time);

    fprintf(fp, "%d %s %s %s %s\n", b.id, b.name, b.phone, b.date, b.time);

    fclose(fp);
    printf("Saved successfully.\n");
}

void viewBookings() {
    FILE *fp = fopen("bookings.txt", "r");
    struct Booking b;

    if (fp == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nID\tName\t\tPhone\t\tDate\t\tTime\n");
    printf("------------------------------------------------------------\n");

    while (fscanf(fp, "%d %s %s %s %s", &b.id, b.name, b.phone, b.date, b.time) != EOF) {
        printf("%d\t%s\t\t%s\t%s\t%s\n", b.id, b.name, b.phone, b.date, b.time);
    }

    fclose(fp);
}

void searchBooking() {
    FILE *fp = fopen("bookings.txt", "r");
    struct Booking b;
    int searchId, found = 0;

    if (fp == NULL) {
        printf("File error.\n");
        return;
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &searchId);

    while (fscanf(fp, "%d %s %s %s %s", &b.id, b.name, b.phone, b.date, b.time) != EOF) {
        if (b.id == searchId) {
            printf("\nMatch Found!\n");
            printf("Name: %s\nPhone: %s\nDate: %s\nTime: %s\n", b.name, b.phone, b.date, b.time);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("ID not found in our records.\n");
    }

    fclose(fp);
}

int main() {
    int ch;

    while (1) {
        printf("\n--- FUTSAL APP ---\n");
        printf("1. Add Bookings\n");
        printf("2. View Bookings\n");
        printf("3. Search Bookings\n");
        printf("4. Exit\n");
        printf("Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                addBooking();
                break;
            case 2:
                viewBookings();
                break;
            case 3:
                searchBooking();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}