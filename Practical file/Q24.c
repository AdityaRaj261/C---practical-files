//write a c program to enter P,T,R and calculate Compound interest
#include <stdio.h>
#include <math.h>

int main() {
    float principle, time, rate, ci;

    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time in years: ");
    scanf("%f", &time);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    ci = principle * (pow((1 + rate / 100), time));

    printf("Compound interest is: %f", ci);

    return 0;
}