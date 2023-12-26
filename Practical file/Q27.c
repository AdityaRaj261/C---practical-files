#include <stdio.h>

int main() {
    float cost_price, selling_price, profit, loss;

    printf("Enter cost price: ");
    scanf("%f", &cost_price);
    printf("Enter selling price: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price) {
        profit = selling_price - cost_price;
        printf("Profit is: %f", profit);
    } else if (cost_price > selling_price) {
        loss = cost_price - selling_price;
        printf("Loss is: %f", loss);
    } else {
        printf("No profit, no loss.");
    }
    return 0;
}