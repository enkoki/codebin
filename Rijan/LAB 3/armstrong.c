#include <stdio.h>
#include <math.h>
int main() {
    int n, count=0, sum=0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    while(n != 0){
        n /= 10;
        count++;
    }
    n = temp;
    while(n != 0){
        rem = n % 10;
        sum += pow(rem, count);
        n /= 10;
    }

    if(sum == temp){
        printf("\nIs armstrong.");
    }
    else{
        printf("Armstrong.");
    }
    return 0;
}
