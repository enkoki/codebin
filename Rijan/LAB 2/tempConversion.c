#include <stdio.h>

int main(){
    float temp;
    printf("Enter the temperature in celsius scale : ");
    scanf("%f", &temp);

    temp = (temp*9)/5 + 32;
    printf("The temperature is %.2f°F", temp);
    return 0;
}