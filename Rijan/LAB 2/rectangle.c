// Write a program to input the length and breadth of a rectangle and calculate its area and perimeter.

#include <stdio.h>
int main(){
    float length,breadth;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f%f",&length,&breadth);
    float area = length*breadth;
    float perimeter = 2*(length+breadth);
    printf("Area of rectangle is %.2f\nPerimeter of rectangle is %.2f", area,perimeter);
    return 0;
}