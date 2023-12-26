#include <stdio.h>

int main() {
    int month, days;
    printf("Enter month number: ");
    scanf("%d", &month);

    if (month == 2) {
        days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }

    printf("Number of days in the month: %d", days);

    return 0;
}