//write a c program to enter two angles of triangle and find its area
#include <stdio.h>

int main() {
    float angle1, angle2, angle3, area;

    printf("Enter first angle: ");
    scanf("%f", &angle1);
    printf("Enter second angle: ");
    scanf("%f", &angle2);

    angle3 = 180 - (angle1 + angle2);
    area = 0.5 * angle1 * angle2 * sin(angle3);

    printf("The area of the triangle is: %f\n", area);

    return 0;
}