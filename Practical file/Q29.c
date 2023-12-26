#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer, percentage;

    printf("Enter marks of Physics: ");
    scanf("%f", &physics);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &chemistry);

    printf("Enter marks of Biology: ");
    scanf("%f", &biology);

    printf("Enter marks of Mathematics: ");
    scanf("%f", &mathematics);

    printf("Enter marks of Computer: ");
    scanf("%f", &computer);

    percentage = (physics + chemistry + biology + mathematics + computer) / 5;

    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A");
    } else if (percentage >= 80) {
        printf("Grade: B");
    } else if (percentage >= 70) {
        printf("Grade: C");
    } else if (percentage >= 60) {
        printf("Grade: D");
    } else if (percentage >= 40) {
        printf("Grade: E");
    } else {
        printf("Grade: F");
    }

    return 0;
}