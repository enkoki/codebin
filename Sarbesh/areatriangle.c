#include <stdio.h>
float area(int x,int y)
{
    float tri;
    tri = 0.5*x*y;
    return tri;
}
int main()
{
    int base,height;
    printf("Enter height of triangle:");
    scanf("%d",&height);
    printf("Enter base of triangle:");
    scanf("%d",&base);
    
    printf("The area of triangle is %.2f ",area(base,height));
    return 0;
}