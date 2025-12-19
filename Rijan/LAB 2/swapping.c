// Write a program that takes two numbers as input and swaps them using a temporary variable.
#include <stdio.h>
int main(){
    int n1,n2, temp;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    
    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("\n1st number : %d", n1);
    printf("\n2nd number : %d", n2);
    return 0;
}