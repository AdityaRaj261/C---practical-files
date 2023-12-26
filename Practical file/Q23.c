//write a c program to enter P,T,R and calculate simple interest
#include <stdio.h>

int main() {
    float principal, time, rate, simple_interest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time period: ");
    scanf("%f", &time);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    simple_interest = (principal * time * rate) / 100;

    printf("Simple Interest = %f", simple_interest);

    return 0;
}