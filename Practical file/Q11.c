#include <stdio.h>

int main() {
    float length, width, area;
    
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    
    area = length * width;
    
    printf("Area of the rectangle: %f", area);
    
    return 0;
}