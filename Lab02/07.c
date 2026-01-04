#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer: ");
    if(scanf("%d", &n) == 1)
    {
        printf("The input operation was successful\n");
        return 0;
    }
    else
    {
        printf("The input operation failed\n");
        return 1;
    }
}