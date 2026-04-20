#include <stdio.h>

#define PI 3.1416

struct Circle {
    float radius;
};

int main() {
    struct Circle c[2];

    for(int i = 0; i < 2; i++) {
        printf("Enter radius of circle %d: ", i+1);
        scanf("%f", &c[i].radius);
    }

    for(int i = 0; i < 2; i++) {
        float area = PI * c[i].radius * c[i].radius;
        float perimeter = 2 * PI * c[i].radius;

        printf("\nCircle %d:\n", i+1);
        printf("Area = %.2f\n", area);
        printf("Perimeter = %.2f\n", perimeter);
    }

    return 0;
}