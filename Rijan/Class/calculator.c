#include <stdio.h>
#include <ctype.h>

int sum(int n1, int n2){
    return n1+n2;
}
int diff(int n1, int n2){
    return n1-n2;
}
int mul(int n1, int n2){
    return n1*n2;
}
float div(int n1, int n2){
    return (float)n1/n2;
}

int main(){
    int n1, n2;
    char op, response;

    do{
        printf("Enter two numbers\n");
        scanf("%d%d", &n1, &n2);
        diff(n1,n2);

        printf("Enter (+, -, *, /)\n");
        scanf(" %c", &op);

        switch(op){
            case '+':
                printf("%d + %d = %d", n1, n2, sum(n1,n2));
                break;
            case '-':
                printf("%d - %d = %d", n1, n2, diff(n1,n2));
                break;
            case '*':
                printf("%d * %d =  %d", n1, n2, mul(n1,n2));
                break;
            case '/':
                if(n2 == 0){
                    printf("Math Error");
                    break;
                }
                printf("%d / %d = %.1f", n1, n2, div(n1,n2));
                break;
            default:
                printf("Invalid operator.");
        }

        printf("\nDo you want to do again (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);
    }while(response == 'Y');
    printf("\nHave a nice day!\n");
    return 0;
}