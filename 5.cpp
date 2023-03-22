//Write a C program to enter the radius of a circle and find its diameter,circumference and area.
#include <stdio.h>

int main() {
    float radius, diameter, circumference, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14159 * radius;
    area = 3.14159 * radius * radius;

    printf("Diameter = %.2f units\n", diameter);
    printf("Circumference = %.2f units\n", circumference);
    printf("Area = %.2f square units\n", area);

    return 0;
}

