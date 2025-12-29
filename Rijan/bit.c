#include <stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num & 1){
        printf("It is odd");
    }
    else{
        printf("It is even");
    }
    return 0;
}
// hi gang