#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <unistd.h>

void loading(){
    printf("\nLoading");
    for(int i = 0; i < 3; i++){
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}
int sum(int n1, int n2){
    return n1+n2;
}
int diff(int n1, int n2){
    return n1-n2;
}
int mul(int n1, int n2){
    return n1*n2;
}
float divide(int n1, int n2){
    return (float)n1/n2;
}

int factorial(int n){
    if(n == 0 || n ==1){
        return 1;
    }
    
    return n*factorial(n-1);
}
int square(int n){
    return n * n;
}
int cube(int n){
    return n * n * n;
}
float average(int n1, int n2){
    return ((float)n1+n2)/2;
}

int main(){
    int n1, n2;
    int op;
    bool isrunning = true;

    while(isrunning){
        printf("\nEnter two numbers\n");
        scanf("%d%d", &n1, &n2);
        diff(n1,n2);
        do{
            loading();
            printf("\n----------Operation----------\n");
            printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n");
            printf("5.Factorial\n6.Square\n7.Cube\n8.Average\n9.Re-enter Numbers\n10.Exit\n");
            printf("-----------------------------\n");
            printf("Enter your choice: ");
            scanf("%d", &op);

            switch(op){
                case 1:
                    printf("\n%d + %d = %d", n1, n2, sum(n1,n2));
                    break;
                case 2:
                    printf("\n%d - %d = %d", n1, n2, diff(n1,n2));
                    break;
                case 3:
                    printf("\n%d * %d =  %d", n1, n2, mul(n1,n2));
                    break;
                case 4:
                    if(n2 == 0){
                        printf("\nMath Error");
                        break;
                    }
                    printf("\n%d / %d = %.1f", n1, n2, divide(n1,n2));
                    break;
                case 5:
                    printf("\nFactorial of %d = %d", n1, factorial(n1));
                    printf("\nFactorial of %d = %d", n2, factorial(n2));
                    break;
                case 6:
                    printf("\nSqaure of %d = %d", n1, square(n1));
                    printf("\nSqaure of %d = %d", n2, square(n2));
                    break;
                case 7:
                    printf("\nCube of %d = %d", n1, cube(n1));
                    printf("\nCube of %d = %d", n2, cube(n2));
                    break;
                case 8:
                    printf("\nAverage of %d and %d is = %.2f", n1, n2, average(n1,n2));
                    break;
                case 9:
                    break;
                case 10:
                    isrunning = false;
                    break;
                default:
                    printf("\nInvalid operator.");
            }
        }while(op != 9 && op != 10);
    }
    printf("\nHave a nice day!\n");
    return 0;
}