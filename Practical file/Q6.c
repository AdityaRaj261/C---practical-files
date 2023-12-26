#include <stdio.h>

int main() {
    int num1;
    float num2;
    char character;
    
    printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter a float: ");
    scanf("%f", &num2);
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    printf("Integer: %d, Float: %f, Character: %c\n", num1, num2, character);
    
    return 0;
}