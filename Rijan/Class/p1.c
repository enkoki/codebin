#include <stdio.h>
#include <math.h>

int main(){
   int num;
   int product = 1;
   printf("Enter number: ");
   scanf("%d", &num);
   while(num<0){
    printf("Invalid input. Please enter again.\n");
    scanf("%d", &num);
   }
   if(num == 0){
    printf("Factorial is 1");
   }
   else{
    for(int i = 1;i<=num;i++){
        product *= i;
    }
    printf("Factorial of %d is %d.", num, product);
   }
   return 0;
}