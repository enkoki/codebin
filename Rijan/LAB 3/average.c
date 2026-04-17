#include <stdio.h>
int main() {
    int n, count=0, sum=0;
    // printf("Enter any number: ");
    scanf("%d", &n);
    int temp = n;
    while(n != 0){
        n /= 10;
        count++;
    }
    n = temp;

    while(n != 0){
        sum += n % 10;;
        n /= 10;
    }
    float average = sum/count;
    printf("Average: %.2f", average);
    return 0;
}
