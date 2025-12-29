#include <stdio.h>

int main() {
    int n , sum=0,temp;
    printf("Enter a number");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        
        sum=sum*10+n%10;
        n=n/10;
    }
    if(temp == sum)
    {
        printf("Palindrome");
    
    }
    else
    {
        printf("Not palindrome");
    }
    
    

    return 0;
}