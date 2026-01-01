#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
}