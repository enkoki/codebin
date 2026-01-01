#include<stdio.h>
int main()
{
    int n=10,sum=0,c=0;
    while(n>0)
    {
        sum = sum + n;
        n--;
        c++;
    }
    printf("%d %d",sum,c);
}