#include <stdio.h>
#include <ctype.h>

int sum(int, int);
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a,&b);
    printf("The sum is %d", sum(a,b));
    return 0;
}
int sum(int x, int y){
    return x+y;
}