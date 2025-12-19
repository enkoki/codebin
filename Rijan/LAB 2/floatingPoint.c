// Write a program to input a floating-point number and display it up to two decimal places.

#include <stdio.h>
int main(){
    float num;
    printf("Enter any floating point number (Eg: 2.201)\n-> ");
    scanf("%f", &num);
    printf("Your entered number upto two decimal places is %.2f.", num);
    return 0;
}