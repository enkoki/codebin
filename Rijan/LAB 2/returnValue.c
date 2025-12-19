// Write a program to read an integer and check whether the input operation was successful using the return value of scanf()

#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    int is_digit = scanf("%d", &num);
    if(is_digit){
        printf("\nA valid integer was entered by the user.");
    } 
    else{
        printf("\nUser didnt enter a valid integer.");
    }
    return 0;
}