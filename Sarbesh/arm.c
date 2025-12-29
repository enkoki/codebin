#include <stdio.h>
#include<math.h>
int main() {
    int x,temp,c=0,sum=0,rem;
    printf("Enter a number");
    scanf("%d",&x);
    temp = x;
    while(temp > 0)
    {
        c++;
        temp/=10;
    }
    temp = x;
    while(temp>0)
    {
        rem = temp%10;
        sum+=pow(rem,c);
        temp=temp/10;
    }
    temp = x;
    if(temp ==  sum)
    {
        printf("Armstrong");
        
    }
    else
    {
        printf("Not Armstrong");
    }
    

    return 0;
}