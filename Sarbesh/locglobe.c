#include <stdio.h>
void print();
int x = 10;
int main()
{
    int x = 5;
    printf("%d ",x);
    print();
    return 0;
}
void print()
{
    printf("%d",x);
}
