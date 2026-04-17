#include <stdio.h>
#include <math.h>
int main() {
    int height;
    printf("Enter height of pyramid: ");
    scanf("%d", &height);

    for(int i = height; i >= 1; i--){
        for(int j = i; j >= 1 ; j--){
            printf("*");
        }
        printf("\n");
    }
}
