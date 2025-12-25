#include <stdio.h>
#include <math.h>

int main(){
    int num, rem, sum = 0, count = 0, cube;
    printf("Enter any number: ");
    scanf("%d", &num);
    int temp = num;
    while(num != 0){
        num /= 10;
        count++;
    }
    num = temp;
    while(num != 0)
    {
        cube = 1;
        rem = num % 10;
        for(int i = 1; i<=count;i++){
            cube = cube*rem;
        }
        sum = sum + cube;
        num /= 10;
    }

    if(temp == sum){
        printf("%d is an armstrong number.", temp);
    }
    else{
        printf("%d is not an armstrong number.", temp);
    }
    return 0;
}